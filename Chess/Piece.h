#ifndef PIECE_H
#define PIECE_H

#include <string>


using namespace std;

class Piece
{
public:
	string name;
	//black:false
	bool color = false;
	bool isCaptured = false;
	Piece();
	Piece(string name, bool newColor = false);
	

};

inline Piece::Piece()
{
	name = "  __  "; // for formatting purposes
}

Piece::Piece(string newName,bool newColor)
{	
	
	if (newName == "Empty") {
		name = newName;
	}
	else {
		color = newColor;
		name = newName;
		isCaptured = false;
	}
}











#endif
