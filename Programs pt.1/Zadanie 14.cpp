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

	do															//Rozpoczecie pêtli powtarzania.
	{
		system("cls");
		cout << "Piramida :D\n\n";								//Opis dzia³ania programu.
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
			cout << "*\n";										//Pêtla wypisuj¹ca piramidê.	
		}





		cout << "Czy chcesz powtorzyc ?";
		tak = _getch();
	} while (tak == 'T' || tak == 't');							//Zamkniêcie pêtli powtarzaj¹cej.

	return 0;
}