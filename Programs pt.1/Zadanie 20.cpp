// Zadanie 20.cpp : Defines the entry point for the console application.
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

void czyt_dane(int A[], int &n);
void pisz_tab(int A[], int n);
void srednia(int A[], int n);
void maxymalna(int A[], int n);
void minimalna(int A[], int n);
void zadany(int A[], int n);
void policz(int A[], int n);											//Deklaracja funkcji.

int _tmain(int argc, _TCHAR* argv[])
{
	int A[100], n;														//Deklaracja tablicy i zmiennej.
	char wybor;
	do																	//Pocz¹tek petli powtarzajacej.
	{
		system("cls");
		HANDLE  hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout << "\n\n\n\n\n\t\tTablica liczb losowych \n";				//Opis dzia³ania programu.
		SetConsoleTextAttribute(hConsole, 14);
		czyt_dane(A, n);												//Uzycie funkcji 1.
		SetConsoleTextAttribute(hConsole, 13);
		pisz_tab(A, n);													//Uzycie funkcji 2.
		SetConsoleTextAttribute(hConsole, 15);
		maxymalna(A, n);												//Uzycie funkcji 3.
		minimalna(A, n);												//Uzycie funkcji 4.
		SetConsoleTextAttribute(hConsole, 10);
		zadany(A, n);													//Uzycie funkcji 5.
		policz(A, n);													//Uzycie funkcji 6.
		SetConsoleTextAttribute(hConsole, 2);
		srednia(A, n);													//Uzycie funkcji 7.
		SetConsoleTextAttribute(hConsole, 12);
		cout << "\n\n\t\tCzy chcesz powtorzyc ?";
		wybor = _getch();
	} while (wybor == 'T' || wybor == 't');								//Koniec pêtli powtarzaj¹cej.

	return 0;
}

void czyt_dane(int A[], int &n)											//Definicja funkcji 1.
{
	srand(time(NULL));
	int i, a, b;

	cout << "\t\tpodaj liczbe elementow : "; cin >> n;
	cout << "\n\t\tpodaj przedzial losowania od: "; cin >> a;
	cout << "\n\t\tpodaj przedzial losowania do: "; cin >> b;
	for (i = 0; i<n; i++)
	{
		A[i] = rand() % (b - a + 1) + a;
	}
}
void pisz_tab(int A[], int n)											//Definicja funkcji 2.
{
	int i;
	for (i = 0; i<n; i++)
	{

		cout << A[i] << "\n";

	}
}

void srednia(int A[], int n)											//Definicja funkcji 3.
{
	float suma, sr;
	suma = 0;
	for (int i = 0; i<n; i++)
	{
		suma = suma + A[i];
	}
	sr = (suma / n);
	cout << "\n\n\t\tSrednia rowna sie = " << sr;
}

void maxymalna(int A[], int n)											//Definicja funkcji 4.
{
	int poz = 0;
	int max = A[0];
	int i = 0;
	do
	{
		i++;
		if (A[i]>max)
		{
			max = A[i];
			poz = i;
		}

	} while (i <= n);

	cout << "\n\n\t\tMaxymalny element to = " << max;
	cout << "\n\t\tPierwszy raz jest na pozycji nr.: " << poz;

}
	
void minimalna(int A[], int n)											//Definicja funkcji 5.
{
	int poz = 0;
	int min = A[0];
	int i = 0;
	do
	{

		if (A[i]<min)
		{
			min = A[i];
			poz = i;
		}
		i++;

	} while (i<n);

	cout << "\n\n\t\tMinimalny element to = " << min;
	cout << "\n\t\tPierwszy raz jest na pozycji nr.: " << poz;

}

void zadany(int A[], int n)											//Definicja funkcji 6.
{
	int i = 0;
	int x;
	cout << "\n\n\t\tPodaj szukana liczbe: "; cin >> x;
	for (i; i<n; i++)
	{
		if (A[i] == x)
		{
			cout << "\n\nLiczba :" << x << ": ktorej szukasz, znajduje sie na= " << i << " miejscu";

		}
	}
}

void policz(int A[], int n)											//Definicja funkcji 7.
{
	int maxlw = 0;
	int licznik = 0;
	for (int i = 0; i <= n-1; i++)									//Ta pêtla Ÿle liczy, ale nie mam czasu jej naprawiæ :(
	{
			if (A[i] == A[i+1])
				licznik++;	
	}
	if (licznik>maxlw)
		maxlw = licznik;
	cout << "\n\n\tMaxymalna liczba wystapien: " << maxlw;
}