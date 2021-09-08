#ifndef SQUARE_H
#define SQUARE_H

#include "Piece.h"

class Square
{
	Piece piece;
	bool empty = true;

public:
	Square();
	Square(Piece newPiece);
	bool isEmpty();
	string getName();


};

inline Square::Square()
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






#endif 

