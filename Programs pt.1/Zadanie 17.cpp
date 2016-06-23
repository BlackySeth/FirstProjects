// Zadanie 17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

float sinus(float x);

int _tmain(int argc, _TCHAR* argv[])
{
	float g, k;												//Deklaracja zmiennych.
	char tak;
	do														//Pocz¹tek pêtli powtarzania.
	{
		system("cls");
		cout << "Oblicz sinus x\n\n";
		cout << "podaj kat: ";
		cin >> k;											//Opis dzia³ania programu i pobranie zmiennych.
		g = k;
		k = (M_PI*g) / 180;									//Zamiana stopni na radiany.

		cout << "sinus =" << sinus(g) << endl;
		cout << "sinus systemowy =" << sin(k) << endl;
		cout << "Czy chcesz powtorzyc ?";
		tak = _getch();
	} while (tak == 'T' || tak == 't');						//Koniec pêtli powtarzania.

	return 0;
}

float sinus(float x)										//Definicja funkcji sinus.

{
	int s = x;
	int k = 1;
	int suma = x;

	do
	{
		s = -s*((x*x) / (2 * k)*(2 * k + 1));
		suma = suma + s;
		k = k + 1;
	} while (abs(s)>0.000001);								//Obliczanie funkcji sinus z dok³adnoœci¹ 0.000001
	return suma;
}

