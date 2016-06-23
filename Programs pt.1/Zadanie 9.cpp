// Zadanie 9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, a1, b1;
	int nww;											//Deklaracja zmiennych.

	cout << "Program obliczajacy NWW\n\n";
	cout << "Podaj a:\n";
	cin >> a;
	cout << endl;
	cout << "Podaj b:\n";
	cin >> b;
	cout << endl;										//Opis dzia³anie programu i pobranie danych.

	if (a>0 && b>0)										//Sprawdzenie czy liczby s¹ wiêksze od zera.

	{
		a1 = a;
		b1 = b;
		while (a1 != b1)								//Pêtla wyszukuj¹ca nww.
		{
			if (a1<b1)
			{
				a1 = a1 + a;
				nww = a1;								//W wypadku znalezienia - ustawienie wartoœci.
			}
			else
				b1 = b1 + b;
			nww = b1;									//W wypadku znalezienia - ustawienie wartoœci.
		}
		cout << "NWW= " << nww;							//Wypisanie wyniku w przypadku gdy liczby nie s¹ zerami. 
	}
	else
	{
		cout << "NWW= 0";								//Wypisanie wyniku w przypadku gdy liczby s¹ zerami.
	}
	_getch();
	return 0;
}