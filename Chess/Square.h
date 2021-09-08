#ifndef SQUARE_H
#define SQUARE_H

#include "Piece.h"

class Square
{
	Piece piece;
	bool empty;

public:
	
	Square(Piece newPiece);
	bool isEmpty();


};

Square::Square(Piece newPiece){
	piece = newPiece;
	empty = false;
}

bool Square::isEmpty() {
	return empty;
}






#endif 

