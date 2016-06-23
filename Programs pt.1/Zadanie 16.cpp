// Zadanie 16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

long silnia(int x);											//Deklaracja funkcji silnia.

int wynik(int n, int k);									//Deklaracja funkcji wynik.

int _tmain(int argc, _TCHAR* argv[])
{
	int n, p, p1, i, j, suma, k;							//Deklaracja zmiennych.
	char tak;
	do														//Rozpoczêcie pêtli powtarzania.
	{
		system("cls");
		cout << "Oblicz podzbiory\n\n";
		cout << "podaj liczbe elementow w zbiorze: ";
		cin >> n;
		cout << "podaj liczbe elementow wszystkich: ";
		cin >> k;											//Opis dzia³ania programu i pobranie danych.

		cout << "Wynik =" << wynik(n, k) << endl;			//Wypisanie wyniku z funkcji.

		cout << "Czy chcesz powtorzyc ?";
		tak = _getch();
	} while (tak == 'T' || tak == 't');						//Zakoñczenie pêtli powtarzania.

	return 0;
}

long silnia(int x)											//Definicja funkcji silnia.
{

	int s = 1;
	int i = 1;												//Deklaracja zmiennych lokalnych

	do
	{
		s = s*i;
		i++;
	} while (i <= x);										//Pêtla obliczaj¹ca silniê.

	return s;												//Zwracanie wartoœci zmiennej.
}

int wynik(int n, int k)										//Definicja funkcji wynik.

{
	return silnia(n) / (silnia(k)*silnia(n - k));			//Zwracanie wartoœci funkcji.
}