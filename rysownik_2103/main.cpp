#include "rysownik.h"
#include <Windows.h>
#include <iostream>

using namespace std;

void kolor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
	rysownik rysuj;
	pos glowa(50, 20);
	pos nos(50, 25);
	pos oko1(45, 20);
	pos oko2(55, 20);
	pos ucho1(40, 0);
	pos ucho2(56, 0);
	pos srodek1(41, 1);
	pos srodek2(57, 1);

	pos jajko1(20, 20);
	pos jajko2(20, 17);

	pos jajko3(80, 20);
	pos jajko4(80, 17);

	s rozmiar1(15, 5);
	s rozmiar2(15, 5);
	s rozmiar3(15, 3);
	s rozmiar4(15, 3);

	rysuj.rysujKolo(glowa, 10, 15, 1);
	rysuj.rysujKolo(nos, 2, 13, 1);
	rysuj.rysujKolo(oko1, 2, 0, 1);
	rysuj.rysujKolo(oko2, 2, 0, 1);
	rysuj.rysujProstokat(ucho1, rozmiar1, 15, 1);
	rysuj.rysujProstokat(ucho2, rozmiar2, 15, 1);
	rysuj.rysujProstokat(srodek1, rozmiar3, 13, 1);
	rysuj.rysujProstokat(srodek2, rozmiar4, 13, 1);

	rysuj.rysujKolo(jajko1, 6, 9, 1);
	rysuj.rysujKolo(jajko2, 4, 9, 1);

	rysuj.rysujKolo(jajko3, 6, 5, 1);
	rysuj.rysujKolo(jajko4, 4, 5, 1);

	for (int i = 0; i < 20; i++)
	{
		cout << endl;
	}
	kolor(7);
}
