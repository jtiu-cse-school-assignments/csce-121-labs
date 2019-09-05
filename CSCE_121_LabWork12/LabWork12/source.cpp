//
//  main.cpp
//  LabWork12
//
//  Created by Julian Tiu on 2/17/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//

#include <iostream>

// Example program
#include <iostream>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

int main()
{
    
    string firstname, lastname, city;
    
    cout << "Enter First and Last Name on one line: ";
    cin >> firstname >> lastname;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    
    cout << "Enter City: ";
    getline(cin, city); // use getline to get cities with multiple words
    
    cout << "Firstname: " << firstname << endl;
    cout << "Lastname: " << lastname << endl;
    cout << "City: " << city << endl;

}
