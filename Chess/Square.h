#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include "Piece.h"

class Square
{
	Piece* piece = nullptr;
	string name = "";
	string coordinates;
	bool empty = true;
	bool squareColor = false;


public:

	 
	
	
	
	Square();
	Square(Piece newPiece, string coor = "");
	bool isEmpty();
	void makeEmpty();
	string getName();
	void setSquareColor(bool color);
	bool getSquareColor();
	string getCoordinates();
	void setCoordinate(string coor);
	bool getPieceColor();
	Piece& getPiece();
	void setPiece(Piece &piece);

};

Square::Square()
{	

	piece = new Piece();
}

Square::Square(Piece newPiece,string coor){
	piece = new Piece(newPiece);
	coordinates = coor;
	empty = false;
}

bool Square::isEmpty() {
	return empty;
}
string Square::getName() {
	if (this->piece != nullptr) {

		return this->piece->getName();
	
	}
	else {
		return "  __  ";
	}
}
void Square::setSquareColor(bool color) {//setting backround color of the sqaure
	squareColor = color;
}

bool Square::getSquareColor()
{
	return squareColor;
}

void Square::makeEmpty() {
	empty = true;
	Piece newPiece = Piece();
	piece = &newPiece;
}
/*Piece* Square::getPiece() {
	return piece;
}*///

string Square::getCoordinates()
{
	return coordinates;
}

void Square::setCoordinate(string coor)
{
	coordinates = coor;
}

bool Square::getPieceColor() {
	if (this->piece != nullptr ) {
		return this->piece->color;
	}
	else {
		return false;
	}
}

Piece& Square::getPiece() {
	return *piece;
}
void Square::setPiece(Piece &piece) {
	if (this->piece == nullptr) {
		this->piece = new Piece(piece);
	}
	else {
		this->piece = &piece;
	}
}


#endif 

