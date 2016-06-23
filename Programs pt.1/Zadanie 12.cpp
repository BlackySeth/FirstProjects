// Zadanie 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int d, m, r;																		
	char dt, tak;																		//Deklaracja zmiennych.


	do																					//Rozpoczêcie pêtli powtarzania.
	{
		system("cls");
		cout << "Sprawdz dzien tygodnia\n\n";
		cout << "Podaj dzien: ";
		cin >> d;
		cout << endl;
		cout << "Podaj miesiac: ";
		cin >> m;
		cout << endl;
		cout << "Podaj rok: ";
		cin >> r;																		//Opis dzia³ania programu, i pobranie danych.
		cout << endl;
		if (m<3)
		{
			r--;
			m += 12;
		}																				//Sprawdzenie miesi¹ca.
		d = r + r / 4 - r / 100 + r / 400 + 3 * m - (2 * m + 1) / 5 + d + 1;
		d -= (d / 7) * 7;																//Wyliczenie dnia.

		switch (d)
		{
		case 1: {cout << "poniedzialek\n\n";
			break; }
		case 2: {cout << "wtorek\n\n";
			break; }
		case 3: {cout << "sroda\n\n";
			break; }
		case 4: {cout << "czwartek\n\n";
			break; }
		case 5: {cout << "piatek\n\n";
			break; }
		case 6: {cout << "sobota\n\n";
			break; }
		case 7: {cout << "niedziela\n\n";												//Wypisanie wyniku.
			break; }
		}


		cout << "Czy chcesz powtorzyc ?";
		tak = _getch();
	} while (tak == 'T' || tak == 't');													//Koniec pêtli powtarzania.

	return 0;
}