#include <iostream>
#include <cmath>
using namespace std;

bool czy_pierwsza(int liczba) {
	for (int i = 2; i <= sqrt(liczba); i++) {
		if (liczba % i == 0)
			return 1;
		else
			return 0;
	}
}

bool czy_doskonala(int liczba) {
	int a = 1;
	int b = sqrt(liczba);
	for (int i = 2; i <= b; i++) {
		if (liczba % i == 0)
			a += i + liczba / i;
	}
		if (liczba == b * b)
			a -= b;
		if (a == b)
			return 1;

		return 0;
}
 
int euklides() {
	int a = 8;
	int b = 4;
	int nwd = 0;
	if (b == 0)
		nwd += a;
	if (b != 0) {
		nwd = b;
		b = a % b;
		a = nwd;
	}
	return nwd;
}


int main() {
	cout << czy_pierwsza(24) << endl;
	cout << czy_doskonala(24) << endl;
	cout << euklides() << endl; 
	int czynnik = 2;
	int liczba = 8;
	while (liczba > 1) {
		while (liczba % czynnik == 0) {
			cout << czynnik << " ";
			liczba /= czynnik;
		}
		czynnik++;
		cout << liczba << endl;
	}
	

	return 0;
}
