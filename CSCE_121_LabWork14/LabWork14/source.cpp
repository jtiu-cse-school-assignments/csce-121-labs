//
//  main.cpp
//  LabWork14
//
//  Created by Julian Tiu on 2/24/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

const int numDigits = 4;

//************************************ Generates random number to guess ************************************
vector<int> getNumToGuess() {
    int j = 0;
    int i = 0;
    int val;
    const int RANGE = 10;
    vector<int> ans;
    vector<int> numsRef(10);
    
    
    numsRef.push_back(0);
    numsRef.push_back(1);
    numsRef.push_back(2);
    numsRef.push_back(3);
    numsRef.push_back(4);
    numsRef.push_back(5);
    numsRef.push_back(6);
    numsRef.push_back(7);
    numsRef.push_back(8);
    numsRef.push_back(9);
    
    for (j = 0; j < 5; j++) {
        
        val = rand() % RANGE;
        for (i = 0; i < numsRef.size(); i++) {
            
            if (numsRef.at(i) == val) {
                ans.push_back(val);
                numsRef.erase(numsRef.begin() + i);
            }
        }
    }
    if (ans.size() > 4) {
        ans.resize(4);
    }
    if (ans.size() < 4) {
        ans.push_back(0);
    }
    
    cout << "Number to guess: ";
    
    for (i = 0; i < ans.size(); i++) {
        cout << ans.at(i);
    }
    
    cout << endl;
    
    return ans;
    
}

//********************************** Converting user's input to a vector *********************************
vector<int> getGuessVector(int guessNum) {
    vector<int> guess;
    
    //Checking to see if user guess is a number
    /*
    while (cin.fail()) {
        cout << "Input must be an integer." << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cout << "Enter guess: ";
        cin >> guessNum;
    }
     */
    
    // Checking to see if user guess has more than 4 digits
    while (guessNum > 9999) {
        cout << "You can only enter four digits." << endl;
        cin.clear();
        cout << "Enter guess: ";
        cin >> guessNum;
    }
    
    if (guessNum <= 999) {
        
        
        guessNum += 1000;
        
        guess.push_back(guessNum / 1000);
        guessNum = guessNum - (1000 * guess.at(0));
        guess.push_back(guessNum/100);
        guessNum = guessNum - (100 * guess.at(1));
        guess.push_back(guessNum/10);
        guessNum = guessNum - (10 * guess.at(2));
        guess.push_back(guessNum);
        guess.at(0) = 0;
        
    }
    else {
        guess.push_back(guessNum / 1000);
        guessNum = guessNum - (1000 * guess.at(0));
        guess.push_back(guessNum/100);
        guessNum = guessNum - (100 * guess.at(1));
        guess.push_back(guessNum/10);
        guessNum = guessNum - (10 * guess.at(2));
        guess.push_back(guessNum);
    }
    
    return guess;
}

//******************************* Checks to see if there are digit repeats *********************************
bool digitsUnique(const vector<int>& v) {
    bool isUnique = false;
    vector<int> u;
    
    u = v;
        
    char a = 'z';
    char b = 'z';
    char c = 'z';
    int i = 0;
        
    // Checking to see if user guess has the same digits
    for (i = 0; i < u.size() - 3; i++) {
        if (u.at(i) == u.at(i+1)) {
            isUnique = false;
        }
        else if (u.at(i) == u.at(i+2)) {
            isUnique = false;
        }
        else if (u.at(i) == u.at(i+3)) {
            isUnique = false;
        }
        else {
            a = 'a';
        }
    }
    for (i = 1; i < u.size() - 2; i++) {
        if (u.at(i) == u.at(i+1)) {
            isUnique = false;
        }
        else if (u.at(i) == u.at(i+2)) {
            isUnique = false;
        }
        else {
            b = 'b';
        }
    }
    for (i = 2; i < u.size() - 1; i++) {
        if (u.at(i) == u.at(i+1)) {
            isUnique = false;
        }
        else {
            c = 'c';
        }
    }
    if (a == 'a' && b == 'b' && c == 'c') {
        isUnique = true;
    }
    else if (isUnique == false) {
        cout << "Each number must be different." << endl;
    }
    
    return isUnique;
    
}

//********************************************************************************************************
void processBullsCows(int& bulls, int& cows, const vector<int>& guess, const vector<int>& ans) {
    // Checks to see for bulls and cows
    //do {
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < guess.size(); j++) {
                if (ans.at(i) == guess.at(j) && i != j) {
                    cows++;
                }
                if (ans.at(i) == guess.at(j) && i == j) {
                    bulls++;
                }
            }
        }
        
        
        if (bulls != 4){
            cout << bulls << " bulls" << endl;
            cout << cows << " cows" << endl;
        }
    
    //} while (bulls != 4);
    
}

//************************************* Converts answer to string ******************************************
string vectorToString(const vector<int>& v) {
    ostringstream s;
    for (int i = 0; i < numDigits; i++) {
        s << v.at(i);
    }
    return s.str();
}

//************************************************* MAIN ***************************************************
int main() {
    
    int rseed = 0; // seed number
    cout << "Enter seed: ";
    cin >> rseed;  // User's seed number input
    srand(rseed);  // pseudo random generator
    
    int guessNum = 0; // user's input
    int bulls = 0;
    int cows = 0;
    char userIn = 'y'; // For prompting user to play again
    vector<int> v;
    vector<int> ans;
    vector<int> guess;
    bool isGuessCorrect = false;
    
    ans = getNumToGuess();
    
    do {
        do {
            
            cows = 0;
            bulls = 0;
            
            
            cout << "Enter guess: ";
            cin >> guessNum;
            
            v = getGuessVector(guessNum);
            isGuessCorrect = digitsUnique(v);
            if (isGuessCorrect == true) {
                processBullsCows(bulls, cows, v, ans);
            }
        } while (isGuessCorrect == false || bulls != 4);
        
        cout << "Enter 'y' to play again: ";
        cin >> userIn;
        
    }while (userIn == 'y');
    
    cout << "Goodbye";
    vectorToString(ans);
    
    
    return 0;
}

