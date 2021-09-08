#ifndef SQUARE_H
#define SQUARE_H

#include "Piece.h"

class Square
{
	Piece piece;
	bool empty = true;
	bool squareColor;


public:
	Square();
	Square(Piece newPiece);
	bool isEmpty();
	void makeEmpty();
	string getName();
	void setSquareColor(bool color);
	void setPiece(Piece newPiece);
	Piece getPiece();
};

Square::Square()
{
	piece = Piece();
}

Square::Square(Piece newPiece){
	piece = newPiece;
	empty = false;
}

bool Square::isEmpty() {
	return empty;
}
string Square::getName() {
	return piece.name;
}
void Square::setSquareColor(bool color) {//setting backround color of the sqaure
	squareColor = color;
}

void Square::setPiece(Piece newPiece)
{
	piece = newPiece;
}
void Square::makeEmpty() {
	empty = true;
}
Piece Square::getPiece() {
	return piece;
}




#endif 

