#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;
    
    void generateID() {
        id = rand();
    }
    
public:
    Student(string _name, int _id);
    
    Student(string _name) : name(_name) {
        generateID();
    }
    
    Student() : name(""), id(0) {
        generateID();
    }
    
    string getName() const;
    
    void setName(string _name);
    
    int getID() const {
        return id;
    }
};

Student::Student(string _name, int _id) {
    name = _name;
    id = _id;
}


string Student::getName() const {
    return name;
}

void Student::setName(string _name) {
    name = _name;
}

// FIXME:
// implement a output operator (<<) that takes a reference to a output stream, and a constant reference to a Student object
// it must return a reference to the same output stream it took in
ostream& operator<<(ostream &os, const Student &person) {
    os << person.getName() << person.getID();
    return os;
}

int main() {
    Student joe("Joe Smith", 12345);
    Student amy;
    
    cout << "joe's name is " << joe.getName() << endl;
    cout << "amy's name is " << amy.getName() << endl;
    
    cout << "joe's ID is " << joe.getID() << endl;
    cout << "amy's ID is " << amy.getID() << endl;
    
    // FIXME: use your output operator to print the objects joe and amy
    cout << joe << endl;
    cout << amy << endl;
    
    
    //system("pause");
}
