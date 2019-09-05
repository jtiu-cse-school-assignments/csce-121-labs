//
//  main.cpp
//  Labwork7
//
//  Created by Julian Tiu on 2/8/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i = 0;
    cout << setfill('*') << setw(30) << "" << endl;
    cout << "Loop A (for version)" << endl;
    for (int i = 0; i<5; i++) {
        cout << i << endl;
    }
    
    
    cout << setfill('*') << setw(30) << "" << endl;
    cout << "Loop A (while version)" << endl;
    // Add while loop code
    while (i < 5) {
        cout << i << endl;
        i++;
    }
    
    cout << setfill('*') << setw(30) << "" << endl;
    cout << "Loop A (do while version)" << endl;
    // Add do while loop code
    
    
    
    
    
    
    
    
    
    
    cout << setfill('*') << setw(30) << "" << endl;
    cout << "Loop B (while version)" << endl;
    i = 0;
    while (i < 10) {
        cout << "Enter a number less than 10 (Greater than 10 to exit):" << endl;
        cin >> i;
        cout << "Number: " << i << endl;
    }
    
    cout << setfill('*') << setw(30) << "" << endl;
    cout << "Loop B (do while version)" << endl;
    // Add do while loop code
    
    cout << setfill('*') << setw(30) << "" << endl;
    cout << "Loop B (for version)" << endl;
    // Add for loop code
    
    
    
    
    
    
    
    
    
    
    cout << setfill('*') << setw(30) << "" << endl;
    cout << "Loop C (do while version)" << endl;
    i = 20;
    do {
        cout << i * 2 << " ";
        i -= 2;
    } while (i>10);
    cout << endl << endl;
    
    cout << setfill('*') << setw(30) << "" << endl;
    cout << "Loop C (while version)" << endl;
    // Add while loop code
    
    cout << setfill('*') << setw(30) << "" << endl;
    cout << "Loop C (for version)" << endl;
    // Add for loop code
    
    cout << setfill('*') << setw(30) << "" << endl;
}
