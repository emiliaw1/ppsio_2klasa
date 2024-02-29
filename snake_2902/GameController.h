#pragma once
#include "Snake.h"
#include <Windows.h>
#include "Level.h"
class GameController
{
};
	void gotoxy(int x, int y) {
		COORD c;
		c.X = x - 1;
		c.Y = y - 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	}
	void rysujKwadrat(int x, int y, int size_x, int size_y) {
		for (int i = 0; i < size_x; i++) {
			gotoxy(x + i, y);
			std::cout << char(178);
			gotoxy(x + i, y + size_y - 1);
		std:cout << char(178);
		}
		for (int j = 0; j < size_y; j++) {
			gotoxy(x, y + j);
		std:cout << char(178);
			gotoxy(x + size_x - 1, y + j);
			std::cout << char(178);
		}
	}

