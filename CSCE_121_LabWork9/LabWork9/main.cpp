//
//  main.cpp
//  LabWork9
//
//  Created by Julian Tiu on 2/10/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main()
{
    const int NUM_VALUES = 10;
    const int RANGE = 100;
    
    vector<int> unsorted;
    cout << "Unsorted:" << endl;
    for (int i = 0; i < NUM_VALUES; ++i) {
        int val = rand() % RANGE;
        cout << val << endl;
        unsorted.push_back(val);
    }
    
    vector<int> sorted;
    
    /*
     This is were your selection sort code goes
     */
    int min = 0;
    while (unsorted.size() > 0) {
        min = 0;
        for (int i = 0; i < unsorted.size(); i++) {
            if (unsorted.at(i) < unsorted.at(min)) {
                min = i;
            }
        }
        sorted.push_back(unsorted.at(min));
        unsorted.erase(unsorted.begin() + min);
    }
    
    
    cout << "Sorted:" << endl;
    for (unsigned int i = 0; i < sorted.size(); ++i) {
        cout << sorted.at(i) << endl;
    }
    
    //system("pause");
}
