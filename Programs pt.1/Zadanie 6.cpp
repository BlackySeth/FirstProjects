// Zadanie 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i, s;																	//Deklaracja zmiennych. 
	for (i = 1, s = 0; i<11; i++)												//Wykonanie p�tli 10 razy.
	{
		s = s + i*i;															//Dodanie kolejnych cegie� w ka�dym obrocie p�tli.
		cout << s << "\n";														//Wypisanie ilo�ci cegie� kt�re ju� by�y plus dodane w p�tli.
	}
	cout << "Potrzeba " << s << " cegie\210, zeby zbudowa\206 piramid\251";		//Wypisanie wyniku.


	_getch();
	return 0;
}