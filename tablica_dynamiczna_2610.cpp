#include <iostream>
using namespace std;

int main() {
	int n = 10;
	int** tab = new int* [n];
	for (int i = 0; i < n; i++) {
		tab[i] = new int[n - i];
	}

	return 0;
}
// 26102023 lekcja tablica dynamiczna 2d
