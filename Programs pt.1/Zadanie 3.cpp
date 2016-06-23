// Zadanie 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int rok;																				//Deklaracja zmiennej.
	cout << "\n\tProgram sprawdzaj\245cy, czy dany rok jest przest\251pny";
	cout << "\n\tPodaj rok :"; cin >> rok;													//Pobranie danej.

	if ((rok % 4 == 0 && rok % 100 == 0) || rok % 400 == 0)									//Sprawdzenie czy dany rok jest przestêpny.
	{
		cout << "\n\n\tRok :" << rok << ": jest przest\251pny";								//Wypisanie wyniku jeœli jest.
	}
else
{
	cout << "\n\n\tRok :" << rok << ": nie jest przest\251pny";								//Wypisanie wyniku jeœli nie jest.
}
	_getch();
	return 0;
}

