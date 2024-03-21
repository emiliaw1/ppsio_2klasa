#include <iostream>
#include <cmath>
#include "Rysownik.h"

using namespace std;

struct Point {
    int x;
    int y;
};

void Rysownik::RysujProstokat(Point pos, Point size, int kolor, int wypelnienie)
{
    int size = ;
    for (int i = 0; i < size.x; i++) {
        for (int j = 0; j < size.y; j++) {
            if (i == 0 || i == size.x - 1 || j == 0 || j == size.y - 1)
                cout << char(177);
            else
                cout << char(219);
        }
        cout << endl;
  }
}

void Rysownik::RysujKolo(Point pos, Point r, int kolor, int wypelnienie)
{
   
}

int main() {
    RysujKolo(size);
    return 0;
}





