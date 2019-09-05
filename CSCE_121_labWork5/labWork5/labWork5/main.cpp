//
//  main.cpp
//  labWork5
//
//  Created by Julian Tiu on 2/3/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double totalGrains = 0;
    double grainSquare = 0;
    const int BOARD_SIZE = 64;
    
    for(int i = 1; i <= BOARD_SIZE; i++){
        totalGrains = totalGrains + pow(2, (i-1));
        grainSquare = pow(2, (i-1));
    
        cout << "Square " << i << ": " << grainSquare << endl;
        cout << "Total grains: " << totalGrains << endl;
    }
    
    //cout << "Total Grains: " << totalGrains << endl;
}
