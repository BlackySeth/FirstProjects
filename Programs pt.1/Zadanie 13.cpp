// Zadanie 13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, p, p1, suma;															
	char tak;																		//Deklaracja zmiennych

	do																				//Rozpoczêcie pêtli powtarzania.
	{
		system("cls");											
		cout << "Sprawdz czy liczba jest doskonala\n\n";
		cout << "Podaj liczbe do sprawdzenia: ";
		cin >> n;
		cout << "\n\n";																//Opis dzia³ania programu, i pobranie danej.
		suma = 0;
		p = (int)sqrt((float)n);
		while (p>1)
		{
			if (n%p == 0)
			{
				suma = suma + p;
				p1 = n / p;
				if (p1 != p)
				{
					suma = suma + p1;
				}
				else
					p = p - 1;
			}p = p - 1;

		}
		suma++;																		//Sprawdzanie czy podana liczba jest idealna.
		if (suma == n)
		{
			cout << n << " jest liczba idealna ;)\n\n";								//Wypisanie wyniku, jeœli jest.
		}
		else
			cout << n << " nie jest liczba idealna :(\n\n";							//Wypisanie wyniku, jeœli nie jest.


		cout << "Czy chcesz powtorzyc ?";
		tak = _getch();
	} while (tak == 'T' || tak == 't');												//Zamkniêcie pêtli powtarzania.

	return 0;
}