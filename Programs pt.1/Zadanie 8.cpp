// Zadanie 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float i, s, pi;										//Deklaracja zmiennych.

	s = 0;
	for (i = 1; i <= 10000000; i++)						//Pêtla obliczaj¹ca s.	
	{
		s += 1.0 / pow(i, 2);							
	}
	pi = sqrt(s * 6);									//Obliczenie liczby pi, na podstawie s wykonanego w pêtli.

	cout << "Liczba Pi= " << pi;						//Wypisanie liczby pi.

	_getch();
	return 0;
}