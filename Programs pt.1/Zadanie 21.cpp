// Zadanie 21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	char z;
	do																	//Rozpoczêcie pêtli powtarzania.
	{

		system("cls");
		int i, j;
		string wyraz;													//Deklaracja stringu.

		cout << "\t\tProgram sprawdzaj\245cy, czy dany wyraz jest palindromem\n\t\tPodaj wyraz: ";
		cin >> wyraz;													//Opis dzia³ania programu, i pobranie wyrazu.
		for (i = 0, j = wyraz.length() - 1; i < j; i++, j--)
		{
			if (wyraz[i] != wyraz[j])
				break;
		}
		if (i < j)														//Sprawdzenie wyrazu.
			cout << "\n\t\tPodany wyraz nie jest palindromem" << endl;	//Wypisanie wyniku, jesli wyraz nie jest palindromem.
		else
			cout << "\n\t\tPodany wyraz jest palindromem" << endl;		//Wypisanie wyniku, jeœli wyraz jest palindromem.
		cout << "\n\n\t\tCzy chcesz powtorzyc ?";
		z = _getch();
	} while (z == 'T' || z == 't');										//Koniec petli powtarzania.

	return 0;
}