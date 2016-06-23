// Zadanie 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, r;																									//Deklarowanie zmiennych ca³kowitych.
	float x1,x2, y1,y2, d;																							//Deklarowanie zmiennych zmiennoprzecinkowych.

	cout << "\t\tProgram okre\230laj\245cy wzajemne\n\t\tpo\210o\276enie prostej \n\t\twzgl\251dem okr\251gu\n";
	cout << "\n\t\t O r\242wnaniach: \n\t\ty = ax + b\n\t\tx^2 + y^2 = r^2" ;
	cout << "\nPodaj wsp\242\210czynnik kierunku prostej a: "; cin >> a;
	cout << "Podaj wsp\242\210czynnik przesuni\251cia prostej b: "; cin >> b;
	cout << "Podaj promie\344 okr\251gu r: "; cin >> r;																//Opis dzia³ania programu, i pobranie danych.
	
	int j = (a*a) + 1;
	int k = 2 * a*b;
	int l = (b*b) - (r*r);
	d = (k*k) - (4*j*l);																							//Wykonanie obliczeñ.

	cout << "\n\t\t\tDelta =" << d;

	if (d < 0)																										//Sprawdzenie delty mo¿liwoœæ 1
	{
		cout << "\n\n\t\tProsta nie przecina si\251 z okr\251giem !";												//Wypisanie wyniku 1
	}
	else if (d>0)																									//Sprawdzenie delty mo¿liwoœæ 2
	{
		x1 = (-k + sqrt(d)) / (2 * j);
		x2 = (-k - sqrt(d)) / (2 * j);
		y1 = a*x1 + b;
		y2 = a*x2 + b;																								//Wykonanie obliczeñ.
		cout << "\n\n\t\tProsta przecina okr\245g w dw\242ch punktach: \n\t\t\t";
		cout << "X1= " << x1 << "\tY1= " << y1;
		cout << "\n\t\t\tX2= " << x2 << "\tY2= " << y2;																//Wypisanie wyników 2
	}
	else if (d==0)																									//Sprawdzenie delty mo¿liwoœæ 3
	{
		cout << "Prosta jest styczna w jednym punkcie: \n\t\t\t";
		x1 = -k / (2 * j);
		y1 = a*x1 + b;																								//Wykonanie obliczeñ.
		cout << "X= " << x1 << "\tY= " << y1;																		//Wypisanie wyniku 3
	}


	_getch();
	return 0;
}



