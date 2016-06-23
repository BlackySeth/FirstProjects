// Zadanie 28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <time.h>																		//Zadeklarowanie bibliotek.

void pisz(int *n, int T[]);
void minmax(int *n, int T[], int *ind_min, int *ind_max);
void srednia(int *ind_min, int *ind_max, int T[]);										//Deklaracja funkcji.

using namespace std;																	//Stosowanie nazw standardowych.

int _tmain(int argc, _TCHAR* argv[])
{
	const int n = 100;
	int T[n], x, ind_min, ind_max;
	char t;																				//Deklaracja zmiennych.
	do																					//Pocz¹tek pêtli powtarzania.
	{ 
		system("cls");
		pisz(&x, T);
		minmax(&x, T, &ind_min, &ind_max);
		srednia(&ind_min, &ind_max, T);													//Uruchomienie kolejno 3 funkcji  1.Uzupe³nia i wypisuje tablicê
		t = _getch();																									//2.Znajdzuje i wypisuje elem. minimalny i maxymalny.
	} while (t == 't' || t == 'T');																						//3.Wylicza i wypisuje œredni¹.
	return 0;
}

void pisz(int *n, int T[])
{
	srand(time(NULL));
	cout << "\t\t\n\nTablica liczb losowych";
	cout << "\n\n\t\tPodaj liczbe elementow: "; cin >> *n;
	cout << "\n";
	for (int i = 0; i<*n; i++, T++)
	{
		*T = rand() % 10;
		cout << "\n\tnr." << i << "[" << *T << "]";
	}
}

void minmax(int *n, int T[], int *ind_min, int *ind_max)
{
	*ind_min = 0;
	*ind_max = 0;
	for (int i = 0; i<*n; i++)
	{
		if (*(T + *ind_min)>*(T + i))
		{
			*ind_min = i;
		}
		if (*(T + *ind_max)<*(T + i))
		{
			*ind_max = i;
		}
	}
}

void srednia(int *ind_min, int *ind_max, int T[])
{
	cout << "\n\n\n\t\tIND MIN:" << *ind_min;
	cout << "\n\n\n\t\tIND MAX:" << *ind_max;
	int licznik = 0, suma = 0;
	float sr = 0;

	
		if (*ind_min > *ind_max)
		{
			if (*ind_max + 1 == *ind_min)
			{
				cout << "\n\n\t\tBrak elementow do wyswietlenia";
			}
			else
			{
				licznik = 0;
				for (int i = *ind_max + 1; i < *ind_min; i++)
				{
					suma = suma + *(T + i);
					licznik = licznik + 1;
				}
				sr = suma / licznik;
				cout << "\n\n\t\tSrednia rowna sie: " << sr;
			}
		}
		else
		{
			if (*ind_min + 1 == *ind_max)
			{
				cout << "\n\n\t\tBrak elementow do wyswietlenia";
			}
			else
			{
				licznik = 0;
				for (int i = *ind_min + 1; i < *ind_max; i++)
				{
					suma = suma + *(T + i);
					licznik = licznik + 1;
				}
				sr = suma / licznik;
				cout << "\n\n\t\tSrednia rowna sie: " << sr;
			}
		}
	

}
