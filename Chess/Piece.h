#ifndef PIECE_H
#define PIECE_H

#include <string>


using namespace std;

class Piece
{
public:
	string name = "";
	bool isCaptured;
	
	Piece();
	~Piece();

};

Piece::Piece()
{
	isCaptured == false;
}

Piece::~Piece()
{
}










#endif
