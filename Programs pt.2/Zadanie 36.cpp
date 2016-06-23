// Zadanie 36.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <string>

using namespace std;


int main()
{
	char t;
	do
	{
		system("cls");
		string napis;
		int i = 0, j;
		int tab[256];

		cout << "Podaj wyraz: " << endl;
		getline(cin, napis); cout << endl;
		j = napis.size() - 1;

		for (int i = 0; i < 256; ++i)
			tab[i] = 0;
		for (int j = 0; j < napis.length(); ++j)
			tab[napis[j]]++;
		for (int i = 0; i<256; ++i)
		if (tab[i]>0) cout << (char)i << " - " << tab[i] << endl;

		t = _getch();
	} while (t == 't' || t == 'T');
	return 0;
}