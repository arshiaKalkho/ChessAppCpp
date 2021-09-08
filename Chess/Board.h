#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"

using namespace std;

class Board{

private:	

	//main board 
	Piece board[8][8];
	

public:


	Board();
	~Board();


	
};

Board::Board()
{
}

Board::~Board()
{
}







#endif