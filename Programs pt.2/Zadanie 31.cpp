// Zadanie 31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <time.h>

void pisz(int *n, int *wsk_tab);
void wys(int *n, int *wsk_tab1, int *wsk_tab2);
void i_skal(int *n, int *wsk_tab1, int *wsk_tab2);
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, *wsk_tab1, *wsk_tab2, *wsk_tab;
	wsk_tab = new int[10];
	char t;
	do
	{
		system("cls");
		cout << "\t\t\n\nTablica liczb";
		cout << "\n\n\t\tPodaj liczbe elementow: "; cin >> n;
		cout << "\n";

		wsk_tab1 = new int[n];
		wsk_tab2 = new int[n];
		pisz(&n, wsk_tab1);
		pisz(&n, wsk_tab2);
		wys(&n, wsk_tab1, wsk_tab2);
		i_skal(&n, wsk_tab1, wsk_tab2);
		delete[]wsk_tab1;
		delete[]wsk_tab2;
		t = _getch();
	} while (t == 't' || t == 'T');
	return 0;
}

void pisz(int *n, int *wsk_tab)
{
	int k;



	for (int i = 0; i<*n; i++, *wsk_tab++)
	{
		cout << "\nPodaj ";
		cout << i << " element: ";
		cin >> k;
		*wsk_tab = k;
		cout << "\t\t\t\tnr." << i << "[" << *wsk_tab << "]";
	}
	_getch();
}
void wys(int *n, int *wsk_tab1, int *wsk_tab2)
{
	int i, x, y;
	system("cls");
	cout << "\n\n";

	for (i = 0; i<*n; i++)
	{
		y = *wsk_tab1 + i;
		x = *wsk_tab2 + i;
		cout << x << "\t\t" << y << "\n";
	}
	_getch();
}

void i_skal(int *n, int *wsk_tab1, int *wsk_tab2)
{
	int i, i_skal;
	i_skal = 0;
	for (i = 0; i<*n; i++)
	{
		i_skal = i_skal + ((*wsk_tab1 + i)*(*wsk_tab2 + i));
	}
	cout << "\n\n\t\tIloczyn skalarny to: " << i_skal;
}