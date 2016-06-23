// Zadanie 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int p, q, t, T, pkt, wygrana;										//Deklaracja zmiennych ca³kowitych.
	char tak;															//Deklaracja zmiennej do powtarzania programu.
	
	do																	//Pocz¹tek pêtli powtarzaj¹cej program.*
	{
		system("cls");

		cout << "Gra w kosci ;)\n\n";									//Opis dzia³ania programu.

		srand(time(NULL));
		p = rand() % 6 + 1;												//Wyznaczenie pierwszej liczby pseudolosowej
		q = rand() % 6 + 1;												//Wyznaczenie drugiej liczby pseudolosowej.
		if (p % 2 == 0)													//Algorytm przyznawania punktów za wylosowane liczby.
		{
			switch (q)
			{
			case 2:case 4:case 5:{wygrana = p + 3 * q; break; }
			case 1:case 3:case 6:{wygrana = 2 * q; break; }
			}
			cout << "Pierwszy rzut= " << p;
			cout << endl;
			cout << "Drugi rzut= " << q;
			cout << endl;
			cout << "Twoja wygrana= " << wygrana;					//Wypisanie wyników.
			cout << endl;
			cout << endl;
		}
		else {
			switch (q)
			{
			case 1:case 3:case 6:{
					   if (p == q)
						   wygrana = 5 * p + 3;
					   else wygrana = 2 * q + p;
					   break; }

			case 2:case 4:case 5:{wygrana =  __min(p,q) + 4; break; }//Nie wiem czemu, na domowym kompilatorze funkcja "min()" nie dzia³a bez podwójnego underline.
			}
			cout << "Pierwszy rzut= " << p;
			cout << endl;
			cout << "Drugi rzut= " << q;
			cout << endl;
			cout << "Twoja wygrana= " << wygrana;					//Wypisanie wyników.
			cout << endl;
			cout << endl;
		}

		cout << "Czy chcesz zagrac ponownie ?";
		tak = _getch();
	} while (tak == 'T' || tak == 't');								//Koniec pêtli powtarzaj¹cej program.

	return 0;
}