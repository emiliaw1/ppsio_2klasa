#include <iostream>
#include <string>
#include <math.h>  
using namespace std;
#define PI 3.14159265

class Wektor{
private:
    int x;
    int y;

public:
    Wektor(int posX, int posY){
        x = posX;
        y = posY;
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }

    string wypiszWartosci(){
        return "(" + to_string(getX()) + "," + to_string(getY()) + ")";
    }

    string wypiszWartosciBiegunowo() {
        double q = sqrt(getX() * getX() + getY() * getY());
		double r = abs(atan(y / x) * (180/PI));
        return " dlugosc wektora: " + to_string(q) + ", promien wodzacy: " + to_string(r) ;
    }

    Wektor dodajWektor(Wektor wektor){
        Wektor wektorPoDodaniu = Wektor(x + wektor.getX(), y + wektor.getY());
        return wektorPoDodaniu;
    }

    Wektor odejmijWektor(Wektor wektor){
        Wektor wektorPoOdjeciu = Wektor(x - wektor.getX(), y - wektor.getY());
        return wektorPoOdjeciu;
    }

    Wektor pomnozWektor(Wektor wektor){
        Wektor wektorPoPomnozeniu = Wektor(x * wektor.getX(), y * wektor.getY());
        return wektorPoPomnozeniu;
    }

};

int main(){
    srand(time(NULL));
    int n;
    cout << "Podaj ilosc wektorow: ";
    cin >> n;
    Wektor ostatniWektor(0, 0);
    for(int i=0; i<n; i++){
        int x = (rand() % 200) - 100;
        int y = (rand() % 200) - 100;
        Wektor wektor(x, y);
        cout << "Wylosowano wektor: " << wektor.wypiszWartosci() << endl;
        ostatniWektor = ostatniWektor.dodajWektor(wektor);
    }
    cout << "Suma wektorow: " << ostatniWektor.wypiszWartosci() << ", " << ostatniWektor.wypiszWartosciBiegunowo() << endl;
    return 0;
}
