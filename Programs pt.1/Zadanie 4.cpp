// Zadanie 4.1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int a, b, c, d, f, x, y, rok;											//Deklaracja zmiennych.


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "\n\t\tProgram sprawdzaj\245cy dat\251 Wielkanocy\n";
	cout << "\t\tPodaj rok: ";
	cin >> rok;															//Opis dzia³ania programu, i pobranie zmiennych.
	if (1 < rok&&rok < 2200)											//Rozpoczêcie algorytmu sprawdzajacego z którego przedzia³u rok zosta³ podany.
	{
		if (rok < 1582)
		{
			x = 15;
			y = 6;
		}
		else if (1583 < rok&&rok < 1699)
		{
			x = 22;
			y = 2;
		}
		else if (1700 < rok&&rok < 1799)
		{
			x = 23;
			y = 3;
		}
		else if (1800 < rok&&rok < 1899)
		{
			x = 23;
			y = 4;
		}
		else if (1900 < rok&&rok < 2099)
		{
			x = 24;
			y = 5;
		}
		else if (2100 < rok&&rok < 2199)
		{
			x = 24;
			y = 6;
		}																//Koniec algorytmu sprawdzaj¹cego.

		a = rok % 19;
		b = rok % 4;
		c = rok % 7;
		d = (19 * a + x) % 30;
		f = (2 * b + 4 * c + 6 * d + y) % 7;							//Wykonanie potrzebnych obliczeñ.

		if (f == 6 && d == 29)
		{
			cout << "\n\tWielkanoc wypada 26 kwietnia";
		}
		else if (f == 6 && d == 28 && (((11 * x + 11) % 30) < 19))
		{
			cout << "\n\tWielkanoc wypada 18 kwietnia";
		}
		else if ((d + f)<10)
		{
			cout << "\n\tWielkanoc wypada " << (22 + d + f) << " marca";
		}
		else if ((d + f)>9)
		{

			cout << "\n\tWielkanoc wypada " << (d + f - 9) << " kwietnia";//Wypisanie wyniku, jeœli zosta³ podany prawid³owy rok.
		}
	}
else
{
	cout << "Nieprdawid\210owy rok";										//Wypisanie dla nieprawid³owego roku.
}
	_getch();
	return 0;
}



