//
//  main.cpp
//  LabWork10
//
//  Created by Julian Tiu on 2/15/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <limits>
using namespace std;

int main() {
    char cont = 'y';
    const int w = 3;
    
    // FIXME: Declare vector named tbl here...
    vector<vector<int> > tbl;
    vector<int> vec1;
    while (cont == 'y') {
        tbl.clear();
        int num = -1;
        // FIXME: add comparisons for while loop that ensure exit
        //   only if number input is between 1 and 9 inclusive
        while (num < 1 || num > 9) {
            cout << "Enter how many numbers for table (1-9): ";
            cin >> num;
            cout << endl << endl;
        }
        // load vector
        // FIXME: add code so that this nested for loop fills
        //   vector with values of multiplication
        for (int i = 1; i <= num; ++i) {
            vec1.clear();
            for (int j = 1; j <= num; ++j) {
                int val = i * j;
                vec1.push_back(val);
            }
            tbl.push_back(vec1);
        }
        
        
        
        // display normal
        // First row
        cout << " " << setw(w) << "|";
        for (int i = 0; i < num; ++i) {
            cout << setw(w) << (i + 1);
        }
        cout << endl;
        cout << "-" << setw(w) << "+";
        // Horizontal Separator
        for (int i = 0; i < num; ++i) {
            cout << setw(w) << "-";
        }
        cout << endl;
        // Rows of table
        // FIXME: add code so that this nested for loop
        //   outputs the values in the vector
        for (int i = 0; i < num; ++i) {
            cout << (i+1) << setw(w) << "|";
            for (int j = 0; j < num; ++j) {
                
                cout << setw(w) << tbl.at(i).at(j);
            }
            cout << endl;
        }
        cout << endl;
        
        // display reversed
        // First row
        cout << " " << setw(w) << "|";
        for (int i = num - 1; i >= 0; --i) {
            cout << setw(w) << (i + 1);
        }
        cout << endl;
        // Horizontal Separator
        cout << "-" << setw(w) << "+";
        for (int i = 0; i < num; ++i) {
            cout << setw(w) << "-";
        }
        cout << endl;
        // Rows of table
        // FIXME: add code so that this nested for loop
        //   outputs the values in the vector
        //     HINT: should like loop above
        //cout << " " << setw(w) << "|";
        for (int i = num - 1; i >= 0; --i) {
            cout << (i + 1) << setw(w) << "|";
            for (int j = num - 1; j >= 0; --j) {
                
                cout << setw(w) << tbl.at(i).at(j);
                
            }
            cout << endl;
        }
        cout << endl;
        
        cout << "Do you want to do another? (y/n) ";
        cin >> cont;
        cout << endl << endl;
        cont = tolower(cont);
    }
    //system("pause"); // Uncomment if you need for Visual Studio
    // comment out system("pause") for Vocareum
    
}
