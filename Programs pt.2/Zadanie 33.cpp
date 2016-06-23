// Zadanie 33.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

void dane(int k, int w, int**wsk_tab);
void pisz_tab(int k, int w, int **wsk_tab);
void sortowanie(int **wsk_tab, int k, int w);

int _tmain(int argc, _TCHAR* argv[])
{
	char t;
	do
	{
		int **wsk_tab, k, w,i;
		char napis;

		system("cls");
		cout << "\t\t\n\nTablica liczb KxW";
		cout << "\n\tPodaj liczbe kolumn: "; cin >> k;
		cout << "\n\tPodaj liczbe wierszy: "; cin >> w;
		cout << "\n";
		
		wsk_tab = new int*[w];
		for (int i = 0; i<w; i++)
		{
			wsk_tab[i] = new int[k];
		}
		i = k*w;
		{
			dane(k, w, wsk_tab);
			pisz_tab(k, w, wsk_tab);
			sortowanie(wsk_tab,k,w);
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
	for (int i = 0; i<w; i++)
	{
		for (int j = 0; j<k; j++)
		{
			*(*(wsk_tab + i) + j) = rand() % 10 + 1;
		}
	}
}
void pisz_tab(int k, int w, int **wsk_tab)
{
	for (int i = 0; i<w; i++)
	{
		for (int j = 0; j<k; j++)
		{
			cout << "\t" << *(*(wsk_tab + i) + j);
		}
		cout << "\n";
	}
	cout << "\n\n";
}


void sortowanie(int **wsk_tab, int k, int w)
{
	for (int i = 0; i<w; i++)
	{
		for (int j = 0; j<k-1; j++)
		{
			if (*(*(wsk_tab) + j)>*(*(wsk_tab) + j+1))
			{
				swap(*(*(wsk_tab) + j),*(*(wsk_tab) + j+1));
			}
		}
	}
}