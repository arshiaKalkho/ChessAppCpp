#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <windows.h>
#include <string>
#include <cstring>


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
	void boardDebugDsp();
	string setCoordinates(int x,int y);
	Square getSquare(string coor);
	string getCoordinates(string coor);

	//oooo here is the big boii
	bool makeAMove(string from, string to);
	
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
		
		}//setting up square color in a chuckerboard pattern
		for (int i = 0; i < 8;i++) {
			for (int j = 0; j < 8; j++) {
				board[i][j].setCoordinate(this->setCoordinates(i+1,8-j));//dirty but it works, setting each square coordinates
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
	
	
	
	SetConsoleTextAttribute(hconsole, 7);//yellow
	

	cout << "_________________________________________________________________________________________" << endl;
	for (int i = 0; i < 8; i++) {
		
		cout << endl;
		SetConsoleTextAttribute(hconsole, 14);
		cout << " " << 8-i << "  ";
		cout << "|";
		for (int j = 0; j < 8; j++) {
			if (board[j][i].getPieceColor()) {
				
				
				if (board[j][i].getSquareColor()) {
					SetConsoleTextAttribute(hconsole, 23);//white blue back
				}
				else {
					SetConsoleTextAttribute(hconsole, 15);//white
				
				}
			}
			else {
				
				if (board[j][i].getSquareColor()) {
					SetConsoleTextAttribute(hconsole, 16);//black blue back
				}else{
					SetConsoleTextAttribute(hconsole, 8);//gray
				}
			}
			cout <<"  " << board[j][i].getName() << "  ";
			SetConsoleTextAttribute(hconsole, 15);//back to normal
			
		}
		cout << "|";
		cout << endl;
	}
	
	
	SetConsoleTextAttribute(hconsole, 14);//yellow
	cout << "_________________________________________________________________________________________" << endl;
	cout << "         A          B         C         D         E         F         G         H        " <<endl;
	SetConsoleTextAttribute(hconsole, 10);

}
void Board::boardDebugDsp() {//use this template to output anything about each square
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout << board[j][i].getCoordinates() << " ";
		}
		cout << endl;
	}


}

string Board::setCoordinates(int x,int y){//get coordinates, return string like (7, 2) = G3
	char column[8] = { 'A','B','C','D','E','F','G','H' };
	char row[8] = { '1','2','3','4','5','6','7','8' };

	string result = "";
	result += column[x-1];
	result += row[y-1];

	return result;


}

string Board::getCoordinates(string coor) {
	string column[8] = { "A","B","C","D","E","F","G","H" };
	string row[8] = { "1","2","3","4","5","6","7","8" };
	string first = coor.substr(0,1);
	string second = coor.substr(1, 1);
	
	for (int i = 0; i < 8; i++) {
		if (first == column[i]) {
			return row[i] += second;
		}
	}

}



Square Board::getSquare(string coor) {
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[j][i].getCoordinates() == coor) {
				return board[j][i];
			}
		}
		cout << endl;
	}

}
//oh boii
 bool Board::makeAMove(string from, string to)
{
	//preparing the values themselves
	string fromLocation = getCoordinates(from);
	string toLocation = getCoordinates(to);
	
	string fromi = fromLocation.substr(0, 1);
	string fromj = fromLocation.substr(1, 1);
	
	string toi = toLocation.substr(0, 1);
	string toj = toLocation.substr(1, 1);
	 

	//making the move
	

	board[stoi(toi)][stoi(toj)].setPiece(board[stoi(fromi)][stoi(fromj)].getPiece());
	
	//empting the old from square
	board[stoi(fromi)][stoi(fromj)].makeEmpty();
	/*board[stoi(fromi)][stoi(fromj)].piece->color = false;
	board[stoi(fromi)][stoi(fromj)].piece->isCaptured = false;
	board[stoi(fromi)][stoi(fromj)].makeEmpty();
	*/
	return true;

 
 }






#endif