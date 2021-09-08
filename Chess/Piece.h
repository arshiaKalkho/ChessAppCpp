#ifndef PIECE_H
#define PIECE_H

#include <string>


using namespace std;

class Piece
{
public:
	string name = "";
	//black:false
	bool color = false;
	bool isCaptured = false;
	Piece();
	Piece(string name, bool newColor = false);
	

};

Piece::Piece(string newName,bool newColor = false)
{	
	
	if (newName == "Empty") {
		name = newName;
	}
	else {
		color = newColor;
		name = newName;
		isCaptured == false;
	}
}











#endif
