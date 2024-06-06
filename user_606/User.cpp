#include "User.h"
#include <iostream>
#include <vector>

User::User(int id, string imie) {
	this->id = id;
	this->imie = imie;
	this->ulub = 0;
}
void User::dodaj_kategorie(int id_kategorii) {
	if () {

	}
	int liczba = 1;
	for (int i = 1; i < id_kategorii; i++) {
		liczba *= 2;
	}
	this->kategorie_ulub += liczba;
} 
void User::Usun_kategorie(int id_kategorii) {
	int liczba = 1;
	for (int i = 1; i < id_kategorii; i++) {
		liczba *= 2;
	}
	this->kategorie_ulub -= liczba;
}
void User::Wyswietl_kategorie() {
	vector<string> Kategorie = { "Sci-Fi, Horror, Fantasy, Thriller, Documentary, Romance, Comedy" };
	char binaryNum[7];
	short liczba = this->kategorie_ulub;
	int i = 0;
	while (liczba > 0) {
		binaryNum[i] = liczba % 2;
		liczba = liczba / 2;
		i++;
	}
	for (int j = 0; j < 6; j++) {
		if (binaryNum[j] == 1) {
			cout << Kategorie[j] << " ";
		}
	}
	cout << endl;
}
