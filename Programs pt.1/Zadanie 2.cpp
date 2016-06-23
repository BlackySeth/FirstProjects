// Zadanie 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>																		//Dodanie bibliotek.

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double long x, y, wy, wx, w;														//Deklaracja zmiennych zmiennoprzecinkowych.
	int a, b, c, d, e, f;																//Deklaracja zmiennych ca³kowitych.
	cout << "\n\t\tProgram obliczaj\245cy \n\t\tuk\210ad r\242wna\344 liniowych";
	cout << "\n\t\tPostaci:\n\tax + by = e\n\tcx + dy = f\n\n";
	cout << "\t\tPodaj wsp\242\210czynnik a: "; cin >> a;
	cout << "\t\tPodaj wsp\242\210czynnik b: "; cin >> b;
	cout << "\t\tPodaj wsp\242\210czynnik e: "; cin >> e;
	cout << "\t\tPodaj wsp\242\210czynnik c: "; cin >> c;
	cout << "\t\tPodaj wsp\242\210czynnik d: "; cin >> d;
	cout << "\t\tPodaj wsp\242\210czynnik f: "; cin >> f;
	cout << "\n\t" << a << "x+" << b << "y=" << e;
	cout << "\n\t" << c << "x+" << d << "y=" << f;										//Opis dzia³ania programu, i pobranie danych.

	w = a*d - b*c;
	wx = e*d - b*f;
	wy = a*f - e*c;																		//Wykonanie dzia³añ.
	if (w == 0 && (wx != 0 || wy != 0))													//Sprawdzanie, czy uk³ad nie jest sprzeczny.
		cout << "Uk\210ad jest sprzeczny";
	else if (w == 0 && wx == 0 && wy == 0)												//Sprawdzanie, czy uk³ad jest oznaczony.
		cout << "Uk\210ad jest nieoznaczony";
	else
	{
		x = wx / w;
		y = wy / w;																		//Obliczenie x i y.
		cout << "\n\t\tx=" << x;
		cout << "\n\t\ty=" << y;														//Wypisanie wyniku.
	}
	_getch();
	return 0;
}

