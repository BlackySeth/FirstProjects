// Zadanie 19.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>


using namespace std;

float f1(float);
float f2(float);
float f3(float);

void bisekcja(float, float, float, float f(float));
void menu();
void obliczenia();															//Deklaracja funkcji.


int _tmain(int argc, _TCHAR* argv[])
{
	obliczenia();															//Dzia³anie funkcji.
	return 0;
}

float f1(float x){return sin(x)*cos(x) + 5 * x + 1;}						//Definicja funkcji 1
float f2(float x){return (M_PI - x * x + sin(x)) / sqrt(25 - x);}			//Definicja funkcji 2
float f3(float x){return exp(-1.5*x) - 0.3*x*x;}							//Definicja funkcji 3

void menu(void)																//Definicja funkcji menu, z opisem dzia³ania programu.
{
	int d;
	cout << "\n\t\t1. Pierwiastek funkcji f1(x) = sin(x)cos(x)+5x+1 \n";
	cout << "\t\t2. Pierwiastek funkcji f2(x) = ( -x*x+sin(x))/sort(25-x) \n";
	cout << "\t\t3. Pierwiastek funkcji f3(x) = exp(-1.5x)-0.3x*x \n";
    cout << "\t\t4. Wylaczenie programu \n";

}

void bisekcja(float a, float b, float E, float f(float x))					//Definicja funkcji bisekcji.
{
	float w, x0, pierw;
	w = 0;
	pierw = 0;

	if (f(a) * f(b) > 0)
	{
		cout << "Funkcja nie spelnia zalozen \n";
	}
	else
	{
		while (abs(a - b)>E)
		{
			w++;
			x0 = (a + b) / 2;

			if (abs(f(x0))<E)
			{
				break;
			}
			else if (f(a)*f(x0) < 0)
			{
				b = x0;
			}
			else
			{
				a = x0;
			}
		}
		pierw = x0;
	}
	cout << "Pierwiastkiem jest = " << pierw << "\n";
	cout << "P\251tla powt\242rzona = " << w << " razy.\n";
}

void obliczenia()																//Definicja funkcji struj¹cej.
{
	float a, b, eps;
	int d;
	do 
	{
		system("cls");
		menu();
		cout << "\t\t\t\t";
		cin >> d;
		system("cls");
		if (d < 4)																//Sprawdzenie, czy nie zosta³o podane polecenie zamkniecia programu.
		{

			cout << "\t\tPodaj a \n";
			cin >> a;
			cout << "\t\tPodaj b \n";
			cin >> b;
			cout << "\t\tPodaj eps \n";
			cin >> eps;															//Pobranie danych.
		}
		else { break; }
		switch (d)
		{
		case 1:																	//Wybór 1.
		{
				  bisekcja(a, b, eps, f1);
				  _getch();
				  break;
		}

		case 2:																	//Wybór 2.
		{
				  bisekcja(a, b, eps, f2);
				  _getch();
				  break;
		}
		case 3:																	//Wybr 3.
		{
				  bisekcja(a, b, eps, f3);
				  _getch();
				  break;
		}

		case 4:																	//Wybór 4 = zamkniêcie programu.
		{
				  cout << "Koniec programu !! \n";
				  _getch();
				  break;
		}
		}
		
	} while (d != 4);															//Sprawdzenie podania poprawnej wartoœci w menu.

}