// Zadanie 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i, s;																	//Deklaracja zmiennych. 
	for (i = 1, s = 0; i<11; i++)												//Wykonanie pêtli 10 razy.
	{
		s = s + i*i;															//Dodanie kolejnych cegie³ w ka¿dym obrocie pêtli.
		cout << s << "\n";														//Wypisanie iloœci cegie³ które ju¿ by³y plus dodane w pêtli.
	}
	cout << "Potrzeba " << s << " cegie\210, zeby zbudowa\206 piramid\251";		//Wypisanie wyniku.


	_getch();
	return 0;
}