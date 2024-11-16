#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 4);
	cout << "\nMy tea's gone cold, I'm wonder why I got out of bed at all\nThe morning rain clouds up my window and I can't see at all\nAnd even if I could it'd all be gray, but your picture on my wall\nIt reminds me that it's not so bad, it's not so bad" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");

	SetConsoleTextAttribute(hConsole, 14);
	cout << "\nDear Slim, I wrote you but you still ain't callin'\nI left my cell, my pager, and my home phone at the bottom\nI sent two letters back in autumn, you must not have got them\nThere probably was a problem at the post office or somethin'\nSometimes I scribble addresses to slobby when I jot them" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");

	SetConsoleTextAttribute(hConsole, 13);
	cout << "\nBut anyway, fuck it, what's been up man? How's your daughter ?\nMy girlfriend's pregnant too, I'm 'bout to be a father!\nIf I have a daughter, guess what I'm gonna call her?\nI'm gonna name her Bonnie\nI read about your uncle Ronnie too, I'm sorry" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");

	SetConsoleTextAttribute(hConsole, 12);
	cout << "\nI had a friend who killed himself\nOver some bitch that didn't want them\nI know you probably hear this everyday\nBut I'm your biggest fan!\nI even got the underground shit that you did with scam" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");

	SetConsoleTextAttribute(hConsole, 11);
	cout << "\nI got a room full of your posters and your pictures man\nI like the shit you did with Ruckus too, that shit was bad\nAnyway, I hope you get this man\nHit me back, just to chat\nTruly yours, this is your biggest fan... this is Stan" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");

	SetConsoleTextAttribute(hConsole, 5);
	cout << "\nMy tea's gone cold, I'm wonder why I got out of bed at all\nThe morning rain clouds up my window and I can't see at all\nAnd even if I could it'd all be gray, but your picture on my wall\nIt reminds me that it's not so bad, it's not so bad" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");
}

