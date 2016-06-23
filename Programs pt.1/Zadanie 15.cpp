// Zadanie 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, p, p1, i, j, suma;
	char tak;													//Deklaracja zmiennych.
	do															//Rozpoczêcie pêtli powtarzania.
	{
		system("cls");
		cout << "ZnajdŸ liczby pierwsze\n\n";
		cout << "podaj n: ";
		cin >> n;												//Opis dzia³ania programu i pobranie danych.
		for (i = 2; i <= n; i++)
		{
			for (j = 2; j <= n; j++)
			{
				if (i%j == 0 && i != j)
					break;
				else if (i == j)
					cout << i << endl;
			}
		}														//Sprawdzenie i wypisanie wyniku.


		cout << "Czy chcesz powtorzyc ?";
		tak = _getch();
	} while (tak == 'T' || tak == 't');							//Zamkniêcie petli powtarzania.

	return 0;
}
