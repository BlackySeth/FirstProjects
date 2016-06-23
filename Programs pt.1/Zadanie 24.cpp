// Zadanie 24.cpp : Defines the entry point for the console application.
//68

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <Windows.h>

using namespace std;

void czyt_dane(int A[10][15], int &n);
void pisz_tab(int A[10][15], int n);
void sortuj(int A[10][15], int n);											//Deklaracje funkcji.

int _tmain(int argc, _TCHAR* argv[]) 
{
	int A[10][15], n;														//Deklaracja tablicy i zmiennej.
	char wybor;
	do																		//Rozpoczêcie petli powtarzania.
	{
		system("cls");
		HANDLE  hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout << "\n\n\n\n\n\t\tTablica liczb losowych \n";					//Opis dzia³ania programu.
		SetConsoleTextAttribute(hConsole, 14);
		czyt_dane(A, n);

		cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		pisz_tab(A, n);
		sortuj(A, n);
		cout << "\n\n\n";
		pisz_tab(A, n);
		cout << "\n\n\t\tCzy chcesz powtorzyc ?";
		wybor = _getch();
	} while (wybor == 'T' || wybor == 't');									//Koniec pêtli powtarzania.

	return 0;
}

void czyt_dane(int A[10][15], int &n)										//Definicja funkcji wczytuj¹cej dane.
{
	srand(time(NULL));
	int i, a, b, j;


	a = 1;
	b = 10;
	for (i = 0; i<10; i++)
	{
		for (j = 0; j<15; j++)
		{
			A[i][j] = rand() % (b - a + 1) + a;
		}

	}
}
void pisz_tab(int A[10][15], int n)											//Definicja funkcji wypisuj¹cej tablicê.
{

	int i;
	for (i = 0; i<10; i++)
	{
		for (int j = 0; j<15; j++)
		{
			cout.width(4);
			cout << A[i][j];
		}
		cout << endl;
	}
}
void sortuj(int A[10][15], int n)											//Definicja funkcji sortujacej.
{ 
	for (int i = 0; i < 10; i++)											//Potrójna pêtla sortujaca b¹belkowo.
	{
		for (int l = 0; l < 14; l++)
		{
			for (int k = 0; k<14; k++)
			{

				if (A[i][k]>A[i][k + 1])									//Sprawdzenie i ew. podmiana wartoœci.
					swap(A[i][k], A[i][k + 1]);

			}
		}
	}
}
