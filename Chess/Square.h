#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include "Piece.h"

class Square
{
	Piece piece;
	string name = "";
	string coordinates;
	bool empty = true;
	bool squareColor;


public:
	Square();
	Square(Piece newPiece, string coor = "");
	bool isEmpty();
	void makeEmpty();
	string getName();
	void setSquareColor(bool color);
	bool getSquareColor();
	void setPiece(Piece newPiece);
	Piece& getPiece();
	string getCoordinates();
	void setCoordinate(string coor);

};

Square::Square()
{	

	piece = Piece();
}

Square::Square(Piece newPiece,string coor){
	piece = newPiece;
	coordinates = coor;
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

bool Square::getSquareColor()
{
	return squareColor;
}

void Square::setPiece(Piece newPiece)
{
	piece = newPiece;
}
void Square::makeEmpty() {
	empty = true;
}
Piece& Square::getPiece() {
	return piece;
}

inline string Square::getCoordinates()
{
	return coordinates;
}

void Square::setCoordinate(string coor)
{
	coordinates = coor;
}




#endif 

