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
	string getName();
	Piece(const Piece &newPiece);
	//Piece(Piece &rhs);
	//void operator=(Piece &rhs);
	

};






Piece::Piece()
{
	name = "  __  "; // for formatting purposes
}
string Piece::getName() {
	return name;
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



Piece::Piece(const Piece &newPiece){
	
		name = newPiece.name;
		color = newPiece.color;
		isCaptured = newPiece.isCaptured;
	
}












#endif
