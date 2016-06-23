// Zadanie 29.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <time.h>
#include <math.h>

using namespace std;

void czyt_dane(int n, int *wsk_A, int *wsk_B);
void pisz_tab(int n, int *wsk_A, int *wsk_B);
int iloczyn_skalarny(int n, int *wsk_A, int *wsk_B);

int _tmain(int argc, _TCHAR* argv[])
{

	int n;
	char t;
	do
	{
		system("cls");
		cout << "Wpisz rozmair: "; cin >> n;
		int *wsk_A = new int[n];
		int *wsk_B = new int[n];
		czyt_dane(n, wsk_A, wsk_B);
		cout << endl;
		pisz_tab(n, wsk_A, wsk_B);
		cout << endl;
		iloczyn_skalarny(n, wsk_A, wsk_B);
		cout << iloczyn_skalarny(n, wsk_A, wsk_B) << endl;
		t = _getch();
	} while (t == 't' || t == 'T');
	return 0;
}

void czyt_dane(int n, int *wsk_A, int *wsk_B)
{

	int i, j;
	srand(time(NULL));

	for (i = 0; i < n; i++)
	{
		*wsk_A = rand() % 10 + 1;
		wsk_A++;
	}

	for (j = 0; j < n; j++)
	{
		*wsk_B = rand() % 10 + 1;
		wsk_B++;
	}
}

void pisz_tab(int n, int *wsk_A, int *wsk_B)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		cout << *wsk_A << " ";
		cout << endl;
	}

	for (j = 0; j < n; j++)
	{
		cout << *wsk_B << " ";
		cout << endl;
	}

}

int iloczyn_skalarny(int n, int *wsk_A, int *wsk_B)
{
	int s = 0, i;
	for (i = 0; i < n; i++)
	{
		s = *wsk_A * *wsk_B + s;
	}

	return s;
}