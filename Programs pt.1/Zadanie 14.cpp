// Zadanie 14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, p, p1, i, j, suma;									//Deklaracja zmiennych
	char tak;

	do															//Rozpoczecie p�tli powtarzania.
	{
		system("cls");
		cout << "Piramida :D\n\n";								//Opis dzia�ania programu.
		cout << "\n\n";
		for (i = 1; i <= 10; i++)
		{
			for (j = 1; j <= 10 - i; j++)
			{
				cout << " ";
			}
			for (n = 1; n <= 2 * i - 2; n++)
			{
				cout << "*";
			}
			cout << "*\n";										//P�tla wypisuj�ca piramid�.	
		}





		cout << "Czy chcesz powtorzyc ?";
		tak = _getch();
	} while (tak == 'T' || tak == 't');							//Zamkni�cie p�tli powtarzaj�cej.

	return 0;
}