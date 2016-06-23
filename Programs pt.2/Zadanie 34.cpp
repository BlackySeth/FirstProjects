// Zadanie 34.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

void pali(string &n);
void test(string n);

int _tmain(int argc, _TCHAR* argv[])
{
	string n;
	char t;
	do
	{
		system("cls");
		cout << "\n\n\t\tSprawdz czy palindrom";
		cout << "\n\t\tWpisz tekst: \n\t\t";
		pali(n);
		test(n);
		t = _getch();
	} while (t == 'T' || t == 't');
	return 0;
}

void pali(string &n)
{
	getline(cin, n);
}
void test(string n)
{
	int z, g, t = 0, f, p;
	char m = ' ';
	z = n.length();
	if (z % 2 == 0){ f = z / 2 - 1; }
	else{ f = z / 2; }
	g = z - 1;
	for (int i = 0; i<f; i++, g--)
	{

		if (n[i] == m)
		{
			i++;
		}
		if (n[g] == m)
		{
			g--;
		}
		if (n[i] == n[g]){ t += 1; }
		cout << "\n\t" << i << "\t\t" << t << "\t\t" << f;

	}
	if (z % 2 == 0){
		if (t == (f + 1))
		{
			cout << "\n\n\t\tBrawo, znalazles palindrom !";
		}
		else
		{
			cout << "\n\n\t\tTo nie jest palindrom";
		}
	}
	else{
		if (t == f)
		{
			cout << "\n\n\t\tBrawo, znalazles palindrom !";
		}
		else
		{
			cout << "\n\n\t\tTo nie jest palindrom";
		}
	}
}