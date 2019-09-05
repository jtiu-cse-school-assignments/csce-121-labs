//
//  Header.h
//  LabWork19_2
//
//  Created by Julian Tiu on 3/21/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//

#ifndef Header_h
#define Header_h

std::vector< std::vector<char> > generateBoard(int n);
void printBoard(const std::vector< std::vector<char> >& board);
bool readInt(int& n);
bool locationInRange(const std::vector< std::vector<char> >& board, int row, int col);
bool locationTaken(const std::vector< std::vector<char> >& board, int row, int col);
void getLocation(const std::vector< std::vector<char> >& board, int& row, int& col, char letter);
void updateBoard(std::vector< std::vector<char> >& board, char player);
char checkWin(const std::vector< std::vector<char> >& board);
int getBoardSize();


#endif /* Header_h */
