// Zadanie 1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"																	//Plik nag³ówkowy
#define _USE_MATH_DEFINES															//Do zadañ matematycznych.
#include <math.h>																	//-----//------
#include <iostream>																	//Do pobrania i wypisania danych.
#include <conio.h>																	//Dla u¿ycia _getch.

using namespace std;

int _tmain(int argc, _TCHAR* argv[])												
{
	float  pol, radiany;															//Deklarowanie zmiennych zmiennoprzecinkowych.
	int pro, sto;																	//Deklarowanie zmiennych ca³kowitych.
	cout << "\n\t\tProgram obliczaj\245cy \n\t\tpole odcinka ko\210owego";
	cout << "\n\n\t\tPodaj promie\344 ko\210a :"; cin >> pro;
	cout << "\n\t\tPodaj k\245t wycinka (w stopniach) :"; cin >> sto;				//£adny opis dzia³ania ;), i pobranie zmiennych.
	
	radiany = ((M_PI*sto) / 180);													//Przeliczenie stopni na radiany (ze strat¹, typ powinien byæ double, ale w przyk³adzie jest float :).
	pol = ((pro*pro) / 2)*(((M_PI*sto)/180) - sin(radiany));						//Wyliczenie pola.

	cout << "\n\t\tPole wynosi :" << pol;											//Wypisanie pola.

	_getch();																		//Oczekiwanie na znak, aby program nie zamkn¹³ siê od razu po skoñczeniu programu.
	return 0;																		//Funkcja nic nie zwraca. 

}

