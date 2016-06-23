// Zadanie 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;														//Deklaracja zmiennych.
	char tak;

	do																//Pocz¹tek pêtli powtarzajacej program.
	{
		system("cls");
		cout << "\n\t\tProgram obliczaj\245cy NWD: \n";
		cout << "\t\tPodaj liczbe a: ";
		cin >> a;
		cout << "\t\tPodaj liczbe b: ";
		cin >> b;													//Opis dzia³ania programu i pobranie danych.

		while (a != b)
		{
			if (a>b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
		cout << "\n\t\tNWD wynosi: " << a << "\n";					//Wypisanie wyniku.
		cout << "\n\n\t\tCzy chcesz powt\242rzy\206 ?";
		tak = _getch();
	} while (tak == 'T' || tak == 't');								//Koniec pêtli powtarzaj¹cej program.

	return 0;
}

