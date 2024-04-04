#include <iostream>
#include <string>

using namespace std;

char plugboard(char letter, string plugboard) {
	for (int i = 0; i == plugboard.size(); i++) {
		if (letter == plugboard[i]) {
			if (plugboard[i + 1] == ' ')
				return plugboard[i - 1];
			else
				return plugboard[i + 1];
		}
	}
	return letter;
}

int main() {
	string rotor1 = "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
	string rotor2 = "AJDKSIRUXBLHWTMCQGZNPYFVOE";
	string rotor3 = "BDFHJLCPRTXVZNYEIWGAKMUSQO";
	string rotor4 = "ESQVPZJAYQUIRHXLNFTGKDCMWB";
	string rotor5 = "VZBRGITYUPSDNHLXAWMJQOFECK";
	string normalized = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	string reflector = "AY BR CU DH EQ FS GL IP JX KN MO TZ VW";
	int steps[5] = { 16, 4, 21, 9, 25 };
	
}
