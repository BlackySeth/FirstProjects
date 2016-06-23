// Zadanie 27.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace std;

void czytaj(int *n, int *X);
void ele_min(const int *, int *, int *, int *);
void pisz(const int *, const int *);

int _tmain(int argc, _TCHAR* argv[])
{
	const int n_Max = 10;
	int X[n_Max];
	int n, el_min, ind_min;
	char powt;
	do
	{
		system("cls");
		czytaj(&n, X);
		ele_min(&n, &X[0], &el_min, &ind_min);
		pisz(&el_min, &ind_min);
		cout << "\n\n\t\tPowtarzamy ?";
		powt = _getch();
	} while (powt == 't' || powt == 'T');
	return 0;
}

void ele_min(const int *n, int *X, int *el_min, int *ind_min)
{

	*el_min = 0;
	*el_min = *X;
	*ind_min = 0;
	for (int i = 0; i<*n; i++)
	{
		cout << *(X + i);
		if (*(X + i)<*el_min)
		{
			*el_min = *(X + i);
			*ind_min = i;

		}
	}
}

void pisz(const int *el_min, const int *ind_min)
{
	cout << "\n\n\t\tNajmniejszy element to: [" << *el_min << "]";
	cout << "\n\t\tJego indeks to= " << *ind_min;
}

void czytaj(int *n, int *X)
{
	cout << "\t\tPodaj rozmiar tablicy: \n\n";
	cin >> *n;
	cout << "\t\tPodaj elementy tablicy: \n\n";
	for (int i = 0; i<*n; i++)
	{
		cout << "X[" << i << "]=";
		cin >> *(X + i);
	}
}