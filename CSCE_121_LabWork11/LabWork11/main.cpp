//
//  main.cpp
//  LabWork11
//
//  Created by Julian Tiu on 2/15/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//

#include <iostream>
#include <limits>
using namespace std;

int main() {
    // STEP1: Test this code as-is with the following inputs
    //      654321
    //      -1234
    //      asdf
    //      asdf123
    //      123asdf
    //      asdf 123
    //      123 asdf
    //      123.456
    //      123 456
    //      0.987
    //      .987
    //      987654321
    //      9876543210
    //
    
    int value1;
    cin >> value1;
    
    while (!cin.good()) {
      cin.clear();
      cin.ignore(numeric_limits<int>::max(), '\n');
      cout << "Enter an integer: ";
      int value1;
      cin >> value1;
      cout << "You entered: " << value1 << endl;

      
        
    }
    
    //cin.clear();
    //cin.ignore(numeric_limits<int>::max(), '\n');
    
    // STEP2: Uncomment the following lines and run your program again,
    //        repeat the inputs if necessary
    
     cout << "Enter a second integer: ";
     int value2;
     cin >> value2;
     cout << "You entered: " << value2 << endl;
    
    
    //system("pause");            // Windows only
}      

