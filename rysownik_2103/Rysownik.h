#pragma once
#include <iostream>

using namespace std;

class rysownik
{
public:
	void rysujProstokat(struct pos, struct s, int kolor, int wypelnienie);
	void rysujKolo(struct pos, int r, int kolor, int wypelnienie);
};

struct pos
{
	int x;
	int y;

	pos(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

struct s
{
	int x;
	int y;

	s(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};
