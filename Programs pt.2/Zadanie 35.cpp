// Zadanie 35.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

void tekst(string &n);
void test(string n);

int _tmain(int argc, _TCHAR* argv[])
{
	string n;
	char t;
	do
	{
		system("cls");
		cout << "\n\n\t\tSprawdz ile wyrazow";
		cout << "\n\t\tWpisz tekst: \n\t\t";
		tekst(n);
		test(n);
		t = _getch();
	} while (t == 'T' || t == 't');
	return 0;
}

void tekst(string &n)
{
	getline(cin, n);
}
void test(string n)
{
	int z, licznik = 0;
	z = n.length();
	for (int i = 0; i<z; i++)
	{
		if (isspace(n[i]))
		{
			licznik++;
		}
	}
	licznik += 1;
	cout << "\n\n\t\tJest :" << licznik << " wyrazow.";
}