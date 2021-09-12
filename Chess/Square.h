#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include "Piece.h"

class Square
{
	
	string name = "";
	string coordinates;
	bool empty = true;
	bool squareColor;


public:

	Piece* piece = nullptr;
	
	
	
	Square();
	Square(Piece newPiece, string coor = "");
	bool isEmpty();
	void makeEmpty();
	string getName();
	void setSquareColor(bool color);
	bool getSquareColor();
	void setPiece(Piece newPiece);
	string getCoordinates();
	void setCoordinate(string coor);

};

Square::Square()
{	

	piece = nullptr;
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

void Square::setPiece(Piece newPiece)
{
	this->piece = &newPiece;
}
void Square::makeEmpty() {
	empty = true;
	Piece newPiece = Piece();
	piece = &newPiece;
}
/*Piece* Square::getPiece() {
	return piece;
}*/

inline string Square::getCoordinates()
{
	return coordinates;
}

void Square::setCoordinate(string coor)
{
	coordinates = coor;
}




#endif 

