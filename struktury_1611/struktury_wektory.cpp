#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

const double pi = 3.1416;
struct Vector2 {
    double x, y;
    Vector2() : x(0.0), y(0.0) {}
    Vector2(double x, double y) : x(x), y(y) {}

    void wartosc_k() {
        cout << "x: " << x << " y: " << y << endl;
    }

    void wartosc_b() {
        double r = sqrt(x*x+y*y);
        double k = atan2(y, x);
        double alfa = fmod(k*(180.0/pi)+360.0,360.0);
        
        cout << "r: " << r << ", kat alfa: " << round(alfa) << endl;
    }

    void dlugosc() {
        double wynik = sqrt(x*x+y*y);
        
        cout << "wynik: " << wynik << endl;
    }

    void reset() {
        x = 0;
        y = 0;
        
        cout << "wektor: (" << x << "," << y << ")" << endl;
    }

    void zmiana() {
        cout << "Podaj x: ";
        cin >> x;
        cout << "Podaj y: ";
        cin >> y;
        cout << "wynik: x = " << x << ", y = " << y << endl;
    }

    void dodawanie() {
        double x_drugi, y_drugi;
        
        cout << "Podaj x drugiego wektora: ";
        cin >> x_drugi;
        cout << "Podaj y drugiego wektora: ";
        cin >> y_drugi;
        x += x_drugi;
        y += y_drugi;
        cout << "wynik: x = " << x << ", y = " << y << endl;
    }

    void odejmowanie() {
        double x_drugi, y_drugi;
        
        cout << "Podaj x drugiego wektora: ";
        cin >> x_drugi;
        cout << "Podaj y drugiego wektora: ";
        cin >> y_drugi;
        
        x -= x_drugi;
        y -= y_drugi;
        
        cout << "wynik: x = " << x << ", y = " << y << endl;
    }

    void mnozenie() {
        double liczba;
        
        cout << "Podaj liczbe do pomnozenia: ";
        cin >> liczba;
        
        x *= liczba;
        y *= liczba;
        
        cout << "wynik: x = " << x << ", y = " << y << endl;
    }
};

int main() {
    double x, y;
    int funkcja;
    
    cout << "Podaj x wektora: ";
    cin >> x;
    cout << "Podaj y wektora: ";
    cin >> y;
    
    Vector2 v1(x, y);

    cout << "Wybierz funkcje: " << endl;
	cout << "[1] Wyswietl wartosc wektora w ukladzie kartezjanskim" << endl;
	cout << "[2] Wyswietl wartosc wektora w ukladzie biegunowym (r i alfa)" << endl;
	cout << "[3] Zwroc dlugosc wektora" << endl;
	cout << "[4] Zresetuj wektor do wspolrzednych (0,0)" << endl;
	cout << "[5] Zmien wartosci wspolrzednych" << endl;
	cout << "[6] Dodaj inny wektor" << endl;
	cout << "[7] Odejmij inny wektor" << endl;
	cout << "[8] Pomnoz przez liczbe" << endl;
    cin >> funkcja;

    switch(funkcja) {
    case 1:
        v1.wartosc_k();
        break;
    case 2:
        v1.wartosc_b();
        break;
    case 3:
        v1.dlugosc();
        break;
    case 4:
        v1.reset();
        break;
    case 5:
        v1.zmiana();
        break;
    case 6:
        v1.dodawanie();
        break;
    case 7:
        v1.odejmowanie();
        break;
    case 8:
        v1.mnozenie();
        break;
    default:
        cout << "Wybierz funkcje";
        break;
    }

    return 0;
}

//uczen(string imie, string nazwisko, int nr) {
		//this.imie = zosia;
		//this.nazwisko = palinska;
		//this.nr = 19;
		//this.pkt = 1000000;
		
	//cout >> "Podaj x: ";
	//cin << float x;
	//cout >> "Podaj y: ";
	//cin << float y;
