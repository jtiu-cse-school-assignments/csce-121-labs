//
//  main.cpp
//  LabWork19_2
//  Using of multiple files (.h and .cpp) to modify tictactoe code
//
//  Created by Julian Tiu on 3/21/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//

#include <vector>
#include <iostream>
#include <string>
#include <limits>
#include "functions.h"
using namespace std;

int main() {
    cout << "Welcome to Tic Tac Toe" << endl;
    
    int bsize = getBoardSize();
    
    vector< vector<char> > board = generateBoard(bsize);
    printBoard(board);
    
    char winner = '_', player = 'X';
    while (winner == '_') {
        updateBoard(board, player);
        printBoard(board);
        winner = checkWin(board);
        player = (player == 'X') ? 'O' : 'X';
    }
    
    if (winner == 'T')
        cout << "Cat!!!" << endl;
    else
        cout << winner << " Won!!!" << endl;
    
    //system("pause");
}
