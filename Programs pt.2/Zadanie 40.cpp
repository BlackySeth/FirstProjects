// Zadanie 40.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <time.h>

struct element
{
	int wartosc;
	struct element *nastepny;
};

struct info
{
	element *glowa;
	element *ogon;
};

void dodaj(int w, info *wsk);
void tworz(int n, info *wsk);
void pisz(info *wsk);
void Usun_Liste(info *Wsk);

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	info *w;
	w = new info;
	w->glowa = NULL;
	w->ogon = NULL;
	char t;
	do
	{
		system("cls");
		cout << "\n\t\tWitaj swiecie !";
		cout << "\n\n\t\tIle liczb losowac ?";
		cin >> n;
		tworz(n, w);
		_getch();
		pisz(w);
		_getch();
		Usun_Liste(w);
		system("cls");
		cout << "\n\n\t\tPowtorzyc ?";
		t = _getch();
	} while (t == 'T' || t == 't');
	return 0;
}

void dodaj(int w, info *wsk)
{
	element *nowy;
	nowy = new element;
	if (wsk->glowa == NULL)
	{
		wsk->glowa = nowy;
		wsk->ogon = wsk->glowa;
	}
	else
	{
		wsk->ogon->nastepny = nowy;
		wsk->ogon = nowy;
	}
	nowy->wartosc = w;
	nowy->nastepny = NULL;

}

void tworz(int n, info *wsk)
{
	srand(time(NULL));
	int i, w;
	for (i = 0; i<n; i++)
	{
		w = rand() % 100 + 1;
		cout << "\n\tel."
			2<< i << " = " << w;
		dodaj(w, wsk);
	}
}

void pisz(info *wsk)
{
	element *bierzacy;
	bierzacy = wsk->glowa;
	if (wsk->glowa == NULL)
	{
		cout << "\n\n\t\tPUSTA LISTA !!";
	}
	else
	{
		cout << "\n\n\t\tLISTA :";
		while (bierzacy != NULL)
		{
			cout << "\n\t" << bierzacy->wartosc << endl;
			bierzacy = bierzacy->nastepny;
		}
	}
}

void Usun_Liste(info *Wsk)
{
	element *bierzacy, *usuniety;
	bierzacy = Wsk->glowa;
	if (Wsk->glowa == NULL)
	{
		cout << "\n\nLista jest pusta";
	}
	else {
		while (bierzacy != NULL)
		{
			usuniety = bierzacy;
			bierzacy = bierzacy->nastepny;
			delete usuniety;
		}
		if (bierzacy == NULL)
			cout << "\nListe usunieto" << endl;
	}
}