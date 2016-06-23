// Zadanie 26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <Windows.h>
#include <iostream>
#include <time.h>

using namespace std;

void dane(int A[10][10], int n);
void pisz(int A[10][10], int n);
void znajdz(int A[10][10], int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int A[10][10], n = 0;
	char t;
	do
	{
		system("cls");
		dane(A, n);
		pisz(A, n);
		cout << "\n\n";
		znajdz(A, n);
		pisz(A, n);

		t = _getch();
	} while (t == 't' || t == 'T');
	return 0;
}

void dane(int A[10][10], int n)
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			A[i][j] = rand() % 100 + 1;
		}
	}

}
void pisz(int A[10][10], int n)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout.width(4);
			cout << A[i][j];
		}
		cout << "\n";
	}


}
void znajdz(int A[10][10], int n)
{
	n = A[0][0];
	int i, j,x,y;
	for (i = 0; i <10; i++)
	{
		for (j = 0; j <10; j++)
		{
			if (A[i][j] < n)
			{
				n = A[i][j];
				x = i;
				y = j;

			}
		}
	}
	cout << "\n\t\t" << n << "na miejscu"<<x<<y<<"\n";
}

