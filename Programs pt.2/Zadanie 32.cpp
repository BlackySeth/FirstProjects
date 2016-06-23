// Zadanie 32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <math.h>
#include <stdlib.h>

void dane(int k, int w, int**wsk_tab);
void pisz_tab(int k, int w, int **wsk_tab);
void zamiana(int k, int w, int **wsk_tab);

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char t;
	do
	{
		int **wsk_tab, k, w;
		char napis;

		system("cls");
		cout << "\t\t\n\nTablica liczb KxW";
		cout << "\n\tPodaj liczbe kolumn: "; cin >> w;
		cout << "\n\tPodaj liczbe wierszy: "; cin >> k;
		cout << "\n";
		wsk_tab = new int*[w];
		for (int i = 0; i<w; i++)
		{
			wsk_tab[i] = new int[k];
		}
		{
			dane(k, w, wsk_tab);
			pisz_tab(k, w, wsk_tab);
			zamiana(k, w, wsk_tab);
			pisz_tab(k, w, wsk_tab);
		}
		for (int i = 0; i<w; i++)
		{
			delete[]wsk_tab[i];
		}delete[]wsk_tab;
		t = _getch();
	} while (t == 't' || t == 'T');
	return 0;
}

void dane(int k, int w, int**wsk_tab)
{
	srand(time(NULL));
	for (int i = 0; i<k; i++)
	{
		for (int j = 0; j<w; j++)
		{
			*(*(wsk_tab + i) + j) = rand() % 100 + 1;
		}
	}
}
void pisz_tab(int k, int w, int **wsk_tab)
{
	for (int i = 0; i<k; i++)
	{
		for (int j = 0; j<w; j++)
		{
			cout << "\t" << *(*(wsk_tab + i) + j);
		}
		cout << "\n";
	}
	cout << "\n\n";
}
void zamiana(int k, int w, int **wsk_tab)
{
	for (int i = 0; i<k; i++)
	{
		swap(*(*(wsk_tab + i) + i), *(*(wsk_tab + i) + k - 1 - i));

	}
}
