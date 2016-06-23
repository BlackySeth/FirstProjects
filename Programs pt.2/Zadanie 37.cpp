// Zadanie 37.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

void tekst(string &n);
void ruch(string n);

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int wherex()
{

	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	return csbi.dwCursorPosition.X;
}
int wherey()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	return csbi.dwCursorPosition.Y;
}

int _tmain(int argc, _TCHAR* argv[])
{
	string n;
	char t;
	do
	{
		system("cls");
		cout << "\n\n\t\tJazda zdaniem";
		cout << "\n\t\tWpisz zdanie: \n\t\t";
		tekst(n);
		ruch(n);
		t = _getch();
	} while (t == 'T' || t == 't');
	return 0;
}

void tekst(string &n)
{
	int dl;
	getline(cin, n);
	dl = n.length();
	if (dl>81)
	{
		cout << "Za dlugi ciag znakow";
	}
}
void ruch(string n)
{
	int dl, x1, x, y;
	char z = 75;
	dl = n.length();
	x = 40 - dl / 2;
	y = 12;
	do{
		system("cls");
		{
			switch (z)
			{
			case 75: { if (x>0){ x--; }break; }
			case 77: { if (x + dl<80){ x++; }break; }
			case 72: { if (y>0){ y--; }break; }
			case 80: { if (y<24){ y++; }break; }
			case 27: { break; }
			}
			gotoxy(x, y);
			cout << n;
		}

		z = _getch();
	} while (z != 27);
}

