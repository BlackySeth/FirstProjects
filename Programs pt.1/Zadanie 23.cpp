// Zadanie 23.cpp : Defines the entry point for the console application.
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

void czyt_dane(int A[5][6], int &n);
void pisz_tab(int A[5][6], int n);
void zamien(int A[5][6], int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int A[5][6], n;												//Deklaracja tablicy i zmiennej.
	char wybor;
	do
	{
		system("cls");
		HANDLE  hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout << "\n\n\n\n\n\t\tTablica liczb losowych \n";		//Opis dzia³ania programu.
		SetConsoleTextAttribute(hConsole, 14);
		czyt_dane(A, n);										//U¿ycie funkcji.
		cout << endl;
		SetConsoleTextAttribute(hConsole, 15);
		pisz_tab(A, n);
		zamien(A, n);											//Zamiana wierszy.
		
		cout << "\n\n\t\tCzy chcesz powtorzyc ?";
		wybor = _getch();
	} while (wybor == 'T' || wybor == 't');

	return 0;
}

void czyt_dane(int A[5][6], int &n)								//Definicja funkcji wczytujacej dane.
{
	srand(time(NULL));
	int i, a, b, j;

	cout << "\t\tLiczba elementow : 30"; n = 30;
	cout << "\n\t\tpodaj przedzial losowania od: 1"; a = 1;
	cout << "\n\t\tpodaj przedzial losowania do: 100"; b = 100;
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<6; j++)
		{
			A[i][j] = rand() % (b - a + 1) + a;
		}

	}
}
void pisz_tab(int A[5][6], int n)								//Definicja funkcji piszacej tablicê.
{
	int i;
	for (i = 0; i<5; i++)
	{
		for (int j = 0; j<6; j++)
		{
			cout << "\t" << A[i][j];
		}
		cout << endl;
	}
}


void zamien(int A[5][6], int n)									//Definicja funkcji zamieniaj¹cej wiersze.
{
	int a,b;

	cout<<"\n\n\t\tPodaj wiersze do zamiany\n\t\tPierwszy wiersz: ";cin>>a;
	cout<<"\n\t\tPodaj drugi wiersz: ";cin>>b;
	if (a>5||b>6)
	{
		cout<<"Nie ma takich wierszy";
	}else
	{
		swap(A[a][0],A[b][0]);
		swap(A[a][1],A[b][1]);
		swap(A[a][2],A[b][2]);
		swap(A[a][3],A[b][3]);
		swap(A[a][4],A[b][4]);
		swap(A[a][5],A[b][5]);
		pisz_tab(A, n);
	}
}