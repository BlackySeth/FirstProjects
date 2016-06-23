// Zadanie 38.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int homer(int n, int a[10], double x);

int _tmain(int argc, _TCHAR* argv[])
{
	int n, a[10];
	double x;
	char t;
	do
	{
		system("cls");
		cout << "\n\n\t\tLiczenie wielomianu";
		cout << "\n\t\tPodaj stopien wielomianu: \n\t\t";
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			system("cls");
			if (i != n)
			{
				cout << "\n\n\t\tPodaj wspolczynnik przy " << n - i << "-tym wyrazie";
				cin >> a[i];
			}
			else{
				cout << "\n\n\t\tPodaj wyraz wolny x^0";
				cin >> a[n];
			}
		}
		system("cls");
		cout << "\n\n\t\tTwoj wielomian to: \n\n\t\t";
		for (int i = 0; i <= n; i++)
		{
			if ((i != n) && (i != n - 1))
			{
				if (a[i + 1]>0){ cout << a[i] << "x^" << n - i << "+"; }
				else{ cout << a[i] << "x^" << n - i; }
			}
			else if (i == (n - 1))
			{
				if (a[n]>0)
					cout << a[n - 1] << "x+";
				else
					cout << a[n - 1] << "x";
			}
			else
				cout << a[n];

		}
		cout << "\n\n\t\tPodaj punkt liczenia wielomianu: ";
		cin >> x;
		cout << "\n\n\t\tWynik wielomianu to: " <<
			homer(n, a, x);

		t = _getch();
	} while (t == 'T' || t == 't');
	return 0;
}

int homer(int n, int a[10], double x)
{
	if (n == 0)return a[0]; else
		return homer(n - 1, a, x)*x + a[n];
}

