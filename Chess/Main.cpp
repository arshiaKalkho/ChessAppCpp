#include <iostream>


#include"Board.h"
#include "Piece.h"
#include "Square.h"
#include "windows.h"

using namespace std;

void initiate() {



	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);//text color
	
	SetConsoleTextAttribute(hconsole, 10);//yellow

	cout << "  cccccccccccccccc         hh               hh         eeeeeeeeeeeeeeeee           sssssssssssssss           sssssssssssssss   " << endl;
	cout << " cccccccccccccccccc       hhhh             hhhh       eeeeeeeeeeeeeeeeeee         sssssssssssssssss         sssssssssssssssss  " << endl;
	cout << "cccccccccccccccccccc      hhhh             hhhh       eeee                       sssssssssssssssssss       sssssssssssssssssss " << endl;
	cout << "cccc                      hhhh             hhhh       eeee                       ssss                      ssss                " << endl;
	cout << "cccc                      hhhhhhhhhhhhhhhhhhhhh       eeeeeeeeeeeeeeeeee         sssssssssssssssss         ssssssssssssssssss  " << endl;
	cout << "cccc                      hhhhhhhhhhhhhhhhhhhhh       eeeeeeeeeeeeeeeeeee         sssssssssssssssss         ssssssssssssssssss " << endl;
	cout << "cccc                      hhhhhhhhhhhhhhhhhhhhh       eeeeeeeeeeeeeeeeee           sssssssssssssssss         ssssssssssssssssss" << endl;
	cout << "cccc                      hhhh             hhhh       eeee                                    ssssss                     ssssss" << endl;
	cout << "cccccccccccccccccccc      hhhh             hhhh       eeee                         ssssssssssssssss          sssssssssssssssss " << endl;
	cout << " cccccccccccccccccc       hhhh             hhhh       eeeeeeeeeeeeeeeeeee         ssssssssssssssss          sssssssssssssssss  " << endl;
	cout << "  cccccccccccccccc         hh               hh         eeeeeeeeeeeeeeeee           ssssssssssssss            sssssssssssssss   " << endl;

	cout << endl;
	cout << endl;

	cout << "Coded by Arshia A Kalkhorani on September of 2021" << endl;
	cout << endl;

	SetConsoleTextAttribute(hconsole, 15);//yellow
}

int main() {
	initiate();


	Board board;
	board.display();
	
	
	
	
	
	
	
	
	return 0;
}