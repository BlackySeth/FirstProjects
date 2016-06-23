// Zadanie 18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double f(double x);
void bisekcja(int a, int b);

int _tmain(int argc, _TCHAR* argv[])
{
	int a,b,e;																					//Deklaracja zmiennych.
	char tak;
	do																							//Rozpoczecie pêtli powtarzania.
	{
		system("cls");
		cout << "\n\t\tProgram obliczaj\245cy funkcje metod\245 bisekcji";
		cout << "\n\t\tPodaj przedzia\210 a: "; cin >> a; cout << "\t\t\t\tb :"; cin >> b;
		cout << "\n\t\tDok\210adno\230\206 oblicze\344 e: 1e-7";								//Opis dzia³ania programu i pobranie danych.

		bisekcja(a,b);																			//Uruchomienie funkcji.

		cout << "\n\n\t\tCzy chcesz powt\242rzy\206 ?";
		tak=_getch();
	} while (tak=='T'||tak=='t');																//Koniec pêtli powtarzania.
	return 0;
}

double f(double x){return exp(-1.5*x) - 0.3*x*x;}												//Definicja fukncji ze zwróceniem wartoœci.

void bisekcja(int a, int b)																		//Definicja funkcji bisekcji.
{
	float k, l, e, w=0, x0;
	k = a; l = b; e = 1e-7;
	{
		if ((f(k)*f(l)) > 0)
		{
			cout << "Funkcja nie spe\210nia za\210o\276e\344";
		}
		else
		{
			while (abs(k - l) > e)
			{
				w++;
				x0 = (k + l) / 2;
				if (abs(f(x0)) < 0)
				{
					break;
				}
				else if ((f(k)*f(x0)) < 0)
				{
					l = x0;
				}
				else { k = x0; }
				
				
			}
			
			cout << "\n\t\tMiejscem zerowym jest: " << x0;										//Wypisanie miejsca zerowego.
		}cout << "\n\t\tP\251tla wykona\210a si\251: " << w << " razy";							//Wypisanie liczby iteracji.
	}
	
	
}