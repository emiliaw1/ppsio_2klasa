#include "rysownik.h"
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;


void gotoxy(int x, int y)
{
	COORD coord = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void zmienKolor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void rysownik::rysujProstokat(pos position, s size, int kolor, int wypelnienie)
{
	zmienKolor(kolor);
	for (int i = 0; i < size.x; i++)
	{
		gotoxy(position.x, position.y + i);
		for (int j = 0; j < size.y; j++)
		{
			if (wypelnienie == 0)
			{
				cout << char(177);
			}
			else
			{
				cout << char(219);
			}
				
		}
	}
}

void rysownik::rysujKolo(pos position, int r, int kolor, int wypelnienie)
{
	zmienKolor(kolor);
	for (int i = position.x - r; i <= position.x + r; i++)
	{
		for (int j = position.y - r; j <= position.y + r; j++)
		{
			if ((i - position.x) * (i - position.x) + (j - position.y) * (j - position.y) <= r * r)
			{
				gotoxy(i, j);

				if (wypelnienie == 0)
				{
					cout << char(177);
				}
				else
				{
					cout << char(219);
				}
			}
		}
	}
}

