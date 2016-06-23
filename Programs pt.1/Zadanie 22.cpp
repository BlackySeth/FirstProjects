// Zadanie 22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <Windows.h>

using namespace std;

void czyt_dane(int A[][10], int &n);
void pisz_tab(int A[][10], int n);
void sortuj(int A[][10], int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int A[10][10], n;												//Deklaracja tablicy, oraz zmiennej.
	char wybor;
	do
	{
		system("cls");
		HANDLE  hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout << "\n\n\n\n\n\t\tTablica liczb losowych \n";			//Opis dzia³ania programu.
		SetConsoleTextAttribute(hConsole, 14);
		czyt_dane(A, n);											//U¿ycie funkcji.

		SetConsoleTextAttribute(hConsole, 13);
		pisz_tab(A, n);												//Wypisanie tablicy.
		sortuj(A, n);												//Sortowanie.
		cout << endl;
		SetConsoleTextAttribute(hConsole, 15);
		pisz_tab(A, n);												//Wypisanie tablicy po sortowaniu.
		cout << "\n\n\t\tCzy chcesz powtorzyc ?";
		wybor = _getch();
	} while (wybor == 'T' || wybor == 't');

	return 0;
}

void czyt_dane(int A[][10], int &n)									//Definicja funkcji wczytujacej dane.
{
	srand(time(NULL));
	int i, a, b, j;

	cout << "\t\tpodaj liczbe elementow : "; cin >> n;
	cout << "\n\t\tpodaj przedzial losowania od: "; cin >> a;
	cout << "\n\t\tpodaj przedzial losowania do: "; cin >> b;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			A[i][j] = rand() % (b - a + 1) + a;
		}

	}
}
void pisz_tab(int A[][10], int n)									//Definicja funkcji wypisuj¹cej dane.
{
	int i;
	for (i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cout << "\t" << A[i][j];
		}
		cout << endl;
	}
}


void sortuj(int A[][10], int n)										//Definicja funkcji sortujacej.
{
	int j = 0, i = 0;
	for (; i<n; i++)
	{
		for (j = 0; j<n - 1; j++)
		{
			if (A[j][j]>A[j + 1][j + 1])
			{
				swap(A[j][j], A[j + 1][j + 1]);
			}
		}
	}
}