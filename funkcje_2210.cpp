#include <iostream>
#include <string>
using namespace std;

float* oblicz_pierwiastki(int a, int b, int c) {
    float miejsce_zerowe1;
    float miejsce_zerowe2;
    static float wynik[3];
    float delta =  pow(b, 2)-4*a*c;
    if (delta > 0) {
        miejsce_zerowe1 = (-b-sqrt(delta)) / (2*a);  
        miejsce_zerowe2= (-b+sqrt(delta)) / (2*a);
        wynik[0] = 2; // 2 miejsca zerowe
        wynik[1] = miejsce_zerowe1;
        wynik[2] = miejsce_zerowe2;
        return wynik;
    } 
    else if (delta == 0) {
        miejsce_zerowe1 = -b / (2*a);   
        wynik[0] = 1; // 1 miejsce zerowe
        wynik[1] = miejsce_zerowe1;
    }
    else {
        wynik[0] = 0; // Brak miejsc zerowych
    }
    return wynik;
}

string* oblicz_wartosc_funkcji(int a, int b, int n) {
    int skok_funkcji = 100/(n+1);
    int argument;
    static string wynik[100];
    string wartosc;
    for (int i=0; i<n; i++) {
        argument = -50 + skok_funkcji*(i+1);
        wynik[i] = " f(" + to_string(argument) + ")=" + to_string(a*argument+b);
    }
    return wynik;
}

int* wygeneruj_ciag(char litera) {
    static int wynik[101];
    int licznik = 0;
    string ciag_pseudolosowy = "";
    char litery[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    for (int i = 0; i < 100; i++) {
        ciag_pseudolosowy = ciag_pseudolosowy + litery[rand() % 26];
    }
    int pozycja = 0;
    while (pozycja != string::npos  && pozycja<99) {
        pozycja = ciag_pseudolosowy.find(litera, pozycja+1);
        if (pozycja != string::npos) {
            licznik++;
            wynik[licznik] = pozycja;
        }
    }
    wynik[0] = licznik;
    return wynik;
}

bool czy_jest_potega(int a) {
    int reszta;

    while (a > 1) {        
        if (a % 3 != 0) {
            return false;
        }
        a /= 3;
    }

    return true;
}

long przekonwertuj(long liczba, bool jest_binarna) {
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

int podaj_wyraz_ciagu(int n) {
    int przedostatnia = 0;
    int ostatnia = 1;
    int wynik = 0;

    if (n == 1){
        return przedostatnia;
    }

    if (n == 2){
        return ostatnia;
    }

    for (int i = 3; i <= n; i++) {
        wynik = przedostatnia + ostatnia;
        przedostatnia = ostatnia;
        ostatnia = wynik;
    }
    return wynik;
}


int main()
{   
    int wybor;
    cout << "Wybierz funkcje:" << endl;
    cout << "[1] Obliczenie pierwiastkow (miejsc zerowych) rownania kwadratowego w postaci f(x) = ax^2 + bx + c" << endl;
    cout << "[2] Obliczanie wartosci funkcji liniowej w postaci f(x) = ax + b w zakresie od -50 do 50" << endl;
    cout << "[3] Generowanie pseudolosowego ciagu znakow o dlugosci 100" << endl;
    cout << "[4] Sprawdzanie czy dana liczba jest n-ta potega liczby 3" << endl;
    cout << "[5] Zamienianie liczby na binarna i odwrotnie" << endl;
    cout << "[6] Podawanie n-tego wyrazu ciagu Fibbonaciego" << endl << endl;
    cout << "Wpisz numer funkcji: "; 
    cin >> wybor;

    float* miejsca_zerowe;
    string* wartosci_funkcji;
    int* wystapienia_litery;
    switch (wybor) {
        case 1:
            int a1;
            cout << "Podaj liczbe a: ";
            cin >> a1;
            int b1;
            cout << "Podaj liczbe b: ";
            cin >> b1;
            int c1;
            cout << "Podaj liczbe c: ";
            cin >> c1;
            cout << "Wywoluje funkcje 'oblicz pierwiastki' z parametrami a = " << a1 << ", b = " << b1 << ", c = " << c1 << endl;
            miejsca_zerowe = oblicz_pierwiastki(a1, b1, c1);
            if (miejsca_zerowe[0] == 2) {
                cout << "Dwa miejsca zerowe: " << miejsca_zerowe[1] << " oraz " << miejsca_zerowe[2];
            } else if (miejsca_zerowe[0] == 1) {
                cout << "Jedno miejsce zerowe: " << miejsca_zerowe[1];
            } else {
                cout << "Brak miejsc zerowych";
            }
            break;

        case 2:
            int a2;
            cout << "Podaj liczbe a: ";
            cin >> a2;
            int b2;
            cout << "Podaj liczbe b: ";
            cin >> b2;
            int n2;
            cout << "Podaj rozdzielczosc n: ";
            cin >> n2;
            cout << "Wywoluje funkcje 'oblicz wartosc funkcji' z parametrami a = " << a2 << ", b = " << b2 << ", n = " << n2 << endl;

            wartosci_funkcji = oblicz_wartosc_funkcji(a2, b2, n2);
            cout << "Wartosci funkcji: ";
            for (int i=0; i<n2; i++) {
                cout << wartosci_funkcji[i] << " ";
            }
            break;

        case 3:
            srand(time(NULL));
            char litera;
            cout << "Podaj litere: ";
            cin >> litera;
            cout << "Wywoluje funkcje 'wygeneruj ciag' z parametrami litera = " << litera << endl;
            wystapienia_litery = wygeneruj_ciag(litera);
            cout << "Znaleziono litere " << litera << " w pseudolosowym ciagu " << wystapienia_litery[0] << " razy" << endl;
            if (wystapienia_litery[0] > 0) {
                cout << "Pozycje: ";
                for (int i=0; i < wystapienia_litery[0]; i++) {
                    cout << wystapienia_litery[i+1] << " ";
                }
            }
            break;

       case 4:
            int a4;
            cout << "Podaj liczbe: ";
            cin >> a4;
            cout << "Wywoluje funkcje 'czy jest potega' z parametrami a = " << a4 << endl;
            if (czy_jest_potega(a4)) {
                cout << "Liczba " << a4 << " jest potega liczby 3";
            }
            else {
                cout << "Liczba " << a4 << " nie jest potega liczby 3";
            }
            break;

        case 5:
            int liczba;
            bool jest_binarna;
            int tryb;
            cout << "Wybierz: " << endl << "[1] Zamien liczbe decymalna na binarna" << endl << "[2] Zamien liczbe binarna na decymalna" << endl;
            cout << "Twoj wybor: ";
            cin >> tryb;

            if (tryb == 1){
                jest_binarna = false;
                cout << "Podaj liczbe decymalna: ";
                cin >> liczba;
            }
            else {
                jest_binarna = true;
                cout << "Podaj liczbe binarna: ";
                cin >> liczba;
            }
            
            cout << "Wywoluje funkcje 'przekonwertuj' z parametrami liczba = " << liczba << ", tryb " << tryb << endl;
            cout << "Wynik = " << przekonwertuj(liczba, jest_binarna);
            break;

        case 6:
            int n6;
            cout << "Podaj n: ";
            cin >> n6;
            cout << "Wywoluje funkcje 'podaj wyraz ciagu' z parametrami n = " << n6 << endl;
            cout << "Wynik = " << podaj_wyraz_ciagu(n6);
            break;
    }
}
