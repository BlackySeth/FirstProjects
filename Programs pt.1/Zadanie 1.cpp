// Zadanie 1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"																	//Plik nag��wkowy
#define _USE_MATH_DEFINES															//Do zada� matematycznych.
#include <math.h>																	//-----//------
#include <iostream>																	//Do pobrania i wypisania danych.
#include <conio.h>																	//Dla u�ycia _getch.

using namespace std;

int _tmain(int argc, _TCHAR* argv[])												
{
	float  pol, radiany;															//Deklarowanie zmiennych zmiennoprzecinkowych.
	int pro, sto;																	//Deklarowanie zmiennych ca�kowitych.
	cout << "\n\t\tProgram obliczaj\245cy \n\t\tpole odcinka ko\210owego";
	cout << "\n\n\t\tPodaj promie\344 ko\210a :"; cin >> pro;
	cout << "\n\t\tPodaj k\245t wycinka (w stopniach) :"; cin >> sto;				//�adny opis dzia�ania ;), i pobranie zmiennych.
	
	radiany = ((M_PI*sto) / 180);													//Przeliczenie stopni na radiany (ze strat�, typ powinien by� double, ale w przyk�adzie jest float :).
	pol = ((pro*pro) / 2)*(((M_PI*sto)/180) - sin(radiany));						//Wyliczenie pola.

	cout << "\n\t\tPole wynosi :" << pol;											//Wypisanie pola.

	_getch();																		//Oczekiwanie na znak, aby program nie zamkn�� si� od razu po sko�czeniu programu.
	return 0;																		//Funkcja nic nie zwraca. 

}

