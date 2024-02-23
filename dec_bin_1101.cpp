#include <iostream>
using namespace std;

long zamiana(long liczba, bool jest_binarna) {
    long wynik = 0;
    if (jest_binarna) {
        int pozycja = 0;
        int reszta;
        while (liczba != 0) {
            reszta = liczba % 10;
            if (reszta == 1) {
                wynik += pow(2, pozycja);
            }
            pozycja++;
            liczba /= 10;
        }
    }
    else {
        long liczba_binarna = 0;
        int pozycja = 1;
        int reszta;
        while (liczba != 0) {
            reszta = liczba % 2;
            liczba_binarna += reszta * pozycja;
            pozycja *= 10;
            liczba /= 2;
        }
        wynik = liczba_binarna;
    }
    return wynik;
}

int main() {
    int wybor;
    int liczba;
    bool jest_binarna;
    cout << "Ktora zamiana? " << endl;
    cout << "[1] Dziesietna na binarna" << endl;
    cout << "[2] Binarna na dziesietna" << endl;
    cin >> wybor;

    if (wybor == 1) {
        jest_binarna = false;
        cout << "Podaj liczbe dziesietna: ";
        cin >> liczba;
        cout << "Wynik: " << zamiana(liczba, jest_binarna);
    }
    else {
        jest_binarna = true;
        cout << "Podaj liczbe binarna: ";
        cin >> liczba;
        cout << "Wynik: " << zamiana(liczba, jest_binarna);
    }
    
}
