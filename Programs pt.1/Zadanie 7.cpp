// Zadanie 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, a, b;												//Deklaracja zmiennych

	cout << "Podaj liczb\251 kt\242rej dzielniki chcesz wyznaczy\206: ";					
	cin >> n;													//Pobranie liczby do wyznaczania dzielników.
	cout << "\n\nDzielnikami liczby " << n << " s\245:\n";
	a = 0;
	while (n >= a)												//Sprawdzanie wszystkich liczb od 0 do podanej.
	{
		a++;
		if (n%a == 0)											//Jeœli liczba jest podzielnikiem, zostaje wypisana.
			cout << a << "\n";
	}

	_getch();
	return 0;
}