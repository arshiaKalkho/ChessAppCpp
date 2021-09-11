#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cwchar>
#include <algorithm>



#include"Board.h"
#include "Piece.h"
#include "Square.h"
#include "windows.h"


using namespace std;

void initiate() {
	//setting font and font size
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   
	cfi.dwFontSize.Y = 30;                  
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); 
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	std::cout << "Font: Consolas, Size: 24\n";





	//changing text color
	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
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
	cout << "Loading";
	//Sleep(1000);
	cout << ".";
	//Sleep(1000);
	cout << ".";
	//Sleep(1500);
	cout << ".";
	cout << endl;
	
	

	SetConsoleTextAttribute(hconsole, 15);
}

string rmWhiteSpaces(string text) {
	text.erase(remove_if(text.begin(), text.end(), ::isspace), text.end());
	return text;
}

void clearConsole(){
		
	    //Get the handle to the current output buffer...
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
		COORD coord = { 0, 0 };
	
		DWORD count;
		
		CONSOLE_SCREEN_BUFFER_INFO csbi;
	
		//Here we will set the current color
		
		if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
			
		{
			
				//This fills the buffer with a given character (in this case 32=space).
				
				FillConsoleOutputCharacter(hStdOut, (TCHAR)32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
			
				FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
			
				//This will set our cursor position for the next print statement.
				
				SetConsoleCursorPosition(hStdOut, coord);
			
		}
	
		return;
	
}


int main() {
	//fullscreen
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	//SendMessage(GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	initiate();
	




	clearConsole();


	Board board;
	
	
	
	//board.makeAMove("h7", "h5");
	board.display();
	
		
	
	
	
	
	
	
	return 0;
}