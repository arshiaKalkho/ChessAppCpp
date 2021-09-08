#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <windows.h>

#include "Piece.h"
#include "Square.h"


using namespace std;

class Board{

private:	

	//main board 
	Square board[8][8];
	

public:


	Board();
	~Board();
	void display();

	
};

Board::Board()
{
	//initial table setup
	for (int i = 0; i < 8; i++) {
		
		for (int j = 0; j < 8; j++) {
			
			
			
			
			
			
			
			if ((i == 0 || i == 7) && j == 0) {//setting up black rooks
				board[i][j] = Square(Piece(" Rook ", false));
			}

			if ((i == 1 || i == 6) && j == 0) {//setting up black knights
				board[i][j] = Square(Piece("Knight", false));
			}

			if ((i == 2 || i == 5) && j == 0) {//setting up black bishops
				board[i][j] = Square(Piece("Bishop", false));
			}

			if (i == 3  && j == 0) {//setting up the queen
				board[i][j] = Square(Piece("Queen ", false));
			}
			if (i == 4 && j == 0) {//setting up the King
				board[i][j] = Square(Piece(" King ", false));
			}

			if (j == 1) {//black pawns
				board[i][j] = Square(Piece(" Pawn ", false));
			}




			//white starts hear
			if ((i == 0 || i == 7) && j == 7) {//setting up white rooks
				board[i][j] = Square(Piece(" Rook ", true));
			}

			if ((i == 1 || i == 6) && j == 7) {//setting up white knights
				board[i][j] = Square(Piece("Knight", true));
			}

			if ((i == 2 || i == 5) && j == 7) {//setting up white bishops
				board[i][j] = Square(Piece("Bishop", true));
			}

			if (i == 3 && j == 7) {//setting up the queen
				board[i][j] = Square(Piece("Queen ", true));
			}
			if (i == 4 && j == 7) {//setting up the King
				board[i][j] = Square(Piece(" King ", true));
			}

			if (j == 6) {//black pawns
				board[i][j] = Square(Piece(" Pawn ", true));
			}
		
			// setting up empty squares
			if (j > 1 && j < 6) {
				board[i][j] = Square();
			}
		
		}
		for (int i = 0; i < 8;i++) {
			for (int j = 0; j < 8; j++) {
				if (i % 2 == 0) {
					if (j % 2 == 0) {
						board[i][j].setSquareColor(false);
					}
					else {
						board[i][j].setSquareColor(true);
					}
				}
				else {
					if (j % 2 == 0) {
						board[i][j].setSquareColor(true);
					}
					else {
						board[i][j].setSquareColor(false);
					}
				}
			}
		}
		




	}
}

Board::~Board()
{
}

void Board::display() {
	
	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);//text color
	
	
	
	SetConsoleTextAttribute(hconsole, 7);
	


	for (int i = 0; i < 8; i++) {
		
		cout << endl;

		for (int j = 0; j < 8; j++) {
			if (board[j][i].getPiece().color) {
				
				
				if (board[j][i].getSquareColor()) {
					SetConsoleTextAttribute(hconsole, 23);
				}
				else {
					SetConsoleTextAttribute(hconsole, 15);
				
				}
			}
			else {
				
				if (board[j][i].getSquareColor()) {
					SetConsoleTextAttribute(hconsole, 16);
				}else{
					SetConsoleTextAttribute(hconsole, 8);
				}
			}

			cout << board[j][i].getName() << "   ";
		}
	}
	cout << endl;
	SetConsoleTextAttribute(hconsole, 10);
}





#endif