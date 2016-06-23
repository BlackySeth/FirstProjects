// Zadanie 30.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <Windows.h>												//Deklaracja bibliotek.

using namespace std;												//U�ycie nazw standardowych.

void czyt_dane(int A[10][10], int &n);								//Deklaracja funkcji losuj�cej dane do tablicy.
void pisz_tab(int A[10][10], int n);								//Deklaracje funkcji wypisuj�cej tablic�.
void zamien(int A[10][10], int n);									//Deklaracja funckji zamieniaj�cej przek�tne tablicy.

int _tmain(int argc, _TCHAR* argv[])
{
	int A[10][10], n;												//Tworzenie zmiennaych.
	char wybor;
	do																//Rozpocz�cie p�tli powtarzania.
	{
		system("cls");												//Czyszczenie ekranu.
		HANDLE  hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout << "\n\n\n\n\n\t\tTablica liczb losowych \n";			//Opis dzia�ania programu.
		SetConsoleTextAttribute(hConsole, 14);
		czyt_dane(A, n);											//Uruchomienie funkcji losuj�cej.
		cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		pisz_tab(A, n);												//Uruchomienie funkcji wypisania.
		zamien(A, n);												//Uruchomienie funkcji zamieniaj�cej przek�tne.
		cout << "\n\n\n";
		pisz_tab(A, n);												//uruchomienie funkcji wypisuj�cej, po zamienieniu przek�tnych.
		SetConsoleTextAttribute(hConsole, 10);
		cout << "\n\n\t\tCzy chcesz powtorzyc ?";
		wybor = _getch();
	} while (wybor == 'T' || wybor == 't');							//Zako�czenie p�tli powtarzania

	return 0;
}

void czyt_dane(int A[10][10], int &n)
{
	srand(time(NULL));
	int i, a, b, j;
	cout << "\n\t\tPodaj wielkosc tablicy:";
	cin >> n;

	a = 1;
	b = 10;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			A[i][j] = rand() % (b - a + 1) + a;
		}

	}																//Zap�nienie tablicy randomowymi cyframi.
}
void pisz_tab(int A[10][10], int n)
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);

	int i;
	for (i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (i == j || ((i + j) == n-1))
			{
				SetConsoleTextAttribute(hConsole, 12);
				cout.width(4);
				cout << A[i][j];
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 10);
				cout.width(4);
				cout << A[i][j];
			}

		}
		cout << endl;
	}																//Wypisywanie tablicy, ze zmian� koloru przek�tnych.
}

void zamien(int A[10][10], int n)
{

	for (int i = 0, k = n-1; i<n+1 && k >= 0; i++, k--)
	{
		swap(A[i][i], A[i][k]);
	}																//Zamiana przek�tnych tablicy.
}
