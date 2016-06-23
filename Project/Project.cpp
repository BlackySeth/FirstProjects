// Projekt v2.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <Windows.h>
#include <iostream>
#include <string>		//Deklaracja bibliotek.

using namespace std;    //Deklaracje korzystania z przestrzeni nazw std.

void menu(int n, char z);  //Deklaracje funkcji menu - sterujacej programem.
void opcje(int n, char z);			   //Deklaracje funkcji opcje - opisuj�cej dzia�anie programu, oraz wy�wietlaj�ca mo�liwe do wyboru opcje.
void rysowanie(int n, char z); //Deklaracje funkcji rysuj�cej figur�, sterujacej ni�, oraz odpowiedzialn� za jej rozamiar.
void kolor(int *n, char z);  //Deklaracja funkcji zmiany koloru figury.
void znak(int n, char *z);  //Deklracaja funkcji zmiany znaku figury.
void HideCursor();  //Deklaracja funkcji chowaj�cej kursor.
int wherex();  //Deklaracja funkcji pobieraj�cej aktualn� pozycj� kursora na osi X.
int wherey();  //Deklaracja funkcji pobieraj�cej aktualn� pozycj� kursora na osi Y.
void gotoxy(int x, int y);  //Deklaracja funkcji przenosz�cej kursor w podane wsp�rz�dne.

int _tmain(int argc, _TCHAR* argv[])  
{
	menu(7, '/');	//Wywo�anie funkcji menu, z pocz�tkowym kolorem, oraz znakiem "/".
	return 0;       //Funkcja ta, niczego nie zwraca.
}

void opcje(int n, char z)
{
	string kolor;
	HANDLE kolorek;				//Utworzenie uchwytu na wyj�cie konsoli.
	kolorek = GetStdHandle(STD_OUTPUT_HANDLE);  //Przypisanie wyj�cia konsoli, do uchwytu.
	SetConsoleTextAttribute(kolorek, 7);  //Ustawienie danego koloru w uchwycie wyj�cia.
	cout << "\n\n\n\t\t\tMENU:"
		<< "\n-------------------------------------------------------------------------------"
		<< "\n\t\tProgram rysuj\245cy figur\251 Z na ekranie"
		<< "\n-------------------------------------------------------------------------------"
		<< "\n\t\t1.Uruchom program."
		<< "\n\t\t2.Zmie\344 kolor figury."
		<< "\n\t\t3.Zmie\344 znak rysowania figury."
		<< "\n\t\t4.Wyjd\253 z programu.";			//Opis dzia�anie programu, z mo�liwymi opcjami.

	switch (n)
	{
	case 7:{kolor = "bia\210y"; break; }
	case 10:{kolor = "zielony"; break; }
	case 11:{kolor = "niebieski"; break; }
	case 12:{kolor = "czerwony"; break; }
	case 14:{kolor = "\276\242\210ty"; break; }
	}

	gotoxy(30, 22);
	cout << "[Masz wybrany ";
	SetConsoleTextAttribute(kolorek, n);

	cout << kolor;
	SetConsoleTextAttribute(kolorek, 7);

	cout << " kolor, oraz ";
	SetConsoleTextAttribute(kolorek, n);

	cout << z;
	SetConsoleTextAttribute(kolorek, 7);

	cout << " znak.]";

}

void kolor(int *n, char z)
{
	HANDLE kolorek;
	kolorek = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(kolorek, 7);
	string x;      //Deklaracja zmiannej wyboru koloru.
	system("cls"); //Czyszczenie tablicy.
	cout << "\n\n\n\t\t\tMENU WYBORU KOLORU:"
		<< "\n-------------------------------------------------------------------------------"
		<< "\n\t\tWpisz kolor, lub wybierz jego numer"
		<< "\n-------------------------------------------------------------------------------"
		<< "\n\t\t1.czerwony."
		<< "\n\t\t2.niebieski."
		<< "\n\t\t3.zielony."
		<< "\n\t\t4.\276\242\210ty."
		<< "\n\t\t5.bia\210y."
		<< "\n\n\t\tPodaj :"; //Opis dzia�ania wyboru koloru, i podane mo�liwe kolory.
	cin >> x;				  //Pobranie warto�ci zmiennej koloru.
	if (x == "czerwony"||x=="1")
	{
		*n = 12;
	}
	else if (x == "niebieski"||x=="2")
	{
		*n = 11;
	}
	else if (x == "zielony"||x=="3")
	{
		*n = 10;
	}
	else if (x == "\276\242\210ty"||x=="4")
	{
		*n = 14;
	}
	else if (x == "bia\210y"||x=="5")
	{
		*n = 7;
	}
	menu(*n, z);			//Powr�t do menu, po wybraniu koloru.

}

void menu(int n, char z)
{
	HideCursor();
	HANDLE kolorek;
	kolorek = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(kolorek, 7);
	char wybor;			//Deklaracja zmiennej wyboru opcji programu.
	system("cls");		//Czyszczenie tablicy.
	opcje(n,z);			//Uruchomienie funkcji opcje.
	wybor = _getch();   //Pobranie zmiennej wyboru.
	switch (wybor)
	{
	case '1':{ rysowanie(n, z); break; }  //Dla wybranej opcji 1.
	case '2':{ kolor(&n, z); break; }	  //Dla wybranej opcji 2.
	case '3':{ znak(n, &z); break; }	  //Dla wybranej opcji 3.
	case '4':{ break; }					  //Dla wybranej opcji 4.
	default:
	{
			   cout << "\n\n\t\tPodaj poprawny znak !"; //Je�li zostanie wybrany inny znak, ni� mo�liwe opcje.
			  _getch();
			   menu(n, z);//Powr�t do menu.
	}
	}
}

void rysowanie(int n, char z)
{
	int w = 8, x = 0, y = 24, x1, y1; //Deklaracja zmiennych.
	char Zamknij;					  //Deklaracja zmiennej wyj�cia.
	x1 = x;
	y1 = y;

	HANDLE kolorek;
	kolorek = GetStdHandle(STD_OUTPUT_HANDLE);
	if (n == 12){ SetConsoleTextAttribute(kolorek, 12); }
	else if (n == 11){ SetConsoleTextAttribute(kolorek, 11); }
	else if (n == 10){ SetConsoleTextAttribute(kolorek, 10); }
	else if (n == 14){ SetConsoleTextAttribute(kolorek, 14); }
	else if (n == 7){ SetConsoleTextAttribute(kolorek, 7); }   //Rysowanie zgodne z wybranym kolorem.
	do
	{
		{
			system("cls");
			gotoxy(x, y);
			x1 = x;
			y1 = y;
			for (int i = 0; i <= w; i++)					//p�tla dolnego ramienia
			{
				gotoxy(x1, y1);
				cout << z;
				x1++;
			}
			x1 = x;
			y1 = y;
			gotoxy(x, y);
			for (int i = 0; i <= w - 1; i++)				//p�tla uko�na.
			{
				y1--;
				x1++;
				gotoxy(x1, y1);
				cout << z;
			}
			for (int i = 0; i <= w; i++)					//p�tla g�rnego ramienia.
			{
				gotoxy(x1, y1);
				cout << z;
				x1--;
			}
		}													//Przestrze� rysowania.
		Zamknij = _getch();									//Pobranie zmiennej steruj�cej.
		switch (Zamknij)
		{
		case '+': { if (x >= 0 && x <= 78 - w&&y >= w + 1 && y <= 24){ w = w + 1;/* x--; y--;*/ } break; } //Zwi�kszanie.
		case '-': { if (w >= 3){ w = w - 1; } break; }													   //Zmniejszanie.
		case 75: { if (x>0){ x--; } break; }															   //Sterowanie w lewo.
		case 77: {if (x <= 78 - w){ x++; } break; }														   //Sterowanie w prawo.
		case 72: {if (y >= w + 1){ y--; } break; }														   //Sterowanie w g�r�.
		case 80: {if (y <= 23){ y++; } break; }															   //Sterowanie w d�.
		case 27: { break; }																				   //Wyj�cie z p�tli switch.
		}

	} while (Zamknij != 27);																			   //Wyj�cie z p�tli rysowania.
	menu(n, z);																							   //Powr�t do menu.
}

void znak(int n, char *z)
{

	HANDLE kolorek;
	kolorek = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(kolorek, 7);
	cout << "\n\n\t\t\tWybierz znak: "; //Opis dzia�ania danej funkcji.
	cin >> *z;							//Pobranie znaku do rysowania.
	menu(n, *z);						//Powr�t do menu.
}

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); //Przej�cie kursora do wsp�rz�dnych X Y.
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

void HideCursor()
{
	HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO hCCI;
	GetConsoleCursorInfo(hConsoleOut, &hCCI);
	hCCI.bVisible = FALSE;
	SetConsoleCursorInfo(hConsoleOut, &hCCI);
}
