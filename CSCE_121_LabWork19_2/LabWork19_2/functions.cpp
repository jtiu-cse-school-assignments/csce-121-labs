//
//  Source.cpp
//  LabWork19_2
//
//  Created by Julian Tiu on 3/21/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//


#include <vector>
#include <iostream>
#include <string>
#include <limits>
//#include "functions.h"
using namespace std;

const unsigned int DEFAULT_SIZE = 3;

vector< vector<char> > generateBoard(int n) {
    return vector< vector<char> >(n, vector<char>(n, '_'));
}

void printBoard(const vector< vector<char> >& board) {
    cout << endl;
    for (unsigned int i = 0; i < board.size(); ++i) {
        for (unsigned int j = 0; j < board.at(i).size(); ++j) {
            cout << board.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool readInt(int& n) {
    cin >> n;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}

bool locationInRange(const vector< vector<char> >& board, int row, int col) {
    if (row <= 0 || row > board.size() || col <= 0)
        return false;
    for (unsigned int i = 0; i < board.size(); ++i)
        if (col > board.at(i).size())
            return false;
    return true;
}

bool locationTaken(const vector< vector<char> >& board, int row, int col) {
    if (!locationInRange(board, row, col))   // sanity check
        return true;
    
    if (board.at(row - 1).at(col - 1) == '_')
        return false;
    else
        return true;
}

void getLocation(const vector< vector<char> >& board, int& row, int& col, char letter) {
    bool valid_pair = false;
    while (!valid_pair) {
        cout << "Enter location for " << letter << ". ";
        
        while (!readInt(row) || !readInt(col))
            cout << "Two integers required\nEnter location for " << letter << ". ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        if (!locationInRange(board, row, col)) {
            cout << "Invalid location. Numbers must be between 1 and " << board.size() << "." << endl;
            continue;
        }
        
        if (locationTaken(board, row, col)) {
            cout << "Location already taken." << endl;
            continue;
        }
        
        valid_pair = true;
    }
}

void updateBoard(vector< vector<char> >& board, char player) {
    int row, col;
    getLocation(board, row, col, player);
    board.at(row - 1).at(col - 1) = player;
}

char checkWin(const vector< vector<char> >& board) {
    if (board.empty())                                  // make sure board is not empty
        return '_';
    int n = board.size();
    for (unsigned int i = 0; i < n; ++i)                // make sure board is square
        if (board.at(i).size() != n)
            return '_';
    
    // winning candidates
    char rowwinner = '_';
    char colwinner = '_';
    char fdiagwinner = board.at(0).at(0);               // initialize forward diagonal
    char bdiagwinner = board.at(0).at(n - 1);           // initialize back diagonal
    
    // check for a winner
    bool boardfull = true;
    for (unsigned int i = 0; i < n; ++i) {
        
        if (board.at(i).at(i) != fdiagwinner)           // check foward diagonal
            fdiagwinner = '_';
        if (board.at(i).at(n - 1 - i) != bdiagwinner)   // check back diagonal
            bdiagwinner = '_';
        
        // initliaze winning candidates for rows and columns
        rowwinner = board.at(i).at(0);
        colwinner = board.at(0).at(i);
        
        for (unsigned int j = 1; j < n; ++j) {
            if (board.at(i).at(j) != rowwinner)         // check row i
                rowwinner = '_';
            
            if (board.at(j).at(i) != colwinner)         // check column i
                colwinner = '_';
            
            if (board.at(i).at(j) == '_')               // check for finished board
                boardfull = false;
        }
        
        // report row or column winner
        if (rowwinner != '_')                           // report row or column winner
            return rowwinner;
        if (colwinner != '_')
            return colwinner;
    }
    
    // report diagonal winner
    if (fdiagwinner != '_')
        return fdiagwinner;
    if (bdiagwinner != '_')
        return bdiagwinner;
    
    // no winner at this point
    if (boardfull)
        return 'T';
    else
        return '_';
}

int getBoardSize() {
    int bsize = 0;
    while (bsize < 2 || bsize > 10) {
        cout << "How many rows / columns ? (2 - 10) ";
        
        while (!readInt(bsize))
            cout << "An integer is required\nHow many rows / columns ? (2 - 10) ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        if (bsize < 2 || bsize > 10)
            cout << "The number of rows/columns must be between 2 and 10." << endl;
    }
    return bsize;
}