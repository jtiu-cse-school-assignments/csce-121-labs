//
//  main.cpp
//  LabWork8
//
//  Created by Julian Tiu on 2/8/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    // get a seed value for the pseudo-random number generator (no user prompt)
    int rseed;
    cin >> rseed;
    srand(rseed);
    
    // define constants for random values
    const int NUM_VALUES = 100;
    const int RANGE = 100;
    
    // populate a vector with random values
    vector<int> values;
    for (int i = 0; i < NUM_VALUES; i++) {
        int val = rand() % RANGE;
        values.push_back(val);
    }
    
    // iterate through vector and print values
    for (int i = 0; i < NUM_VALUES; i++) {
        cout << values.at(i) << endl;
    }
    
    /*
     Students: This is where your code will go to find the
     MIN, MAX, and AVG values in the vector.
     
     Store your MIN and MAX values in ints, and store your
     AVG in a double. Print the 3 values on separate lines
     in the order MIN, MAX, AVG.
     */
    int MIN = 100;
    int MAX = 0;
    int temp = 0;
    double AVG = 0.0;
    
    
    
    cout << MIN << endl;
    cout << MAX << endl;
    cout << AVG << endl;
    
    //system("pause");            // for Windows users
}