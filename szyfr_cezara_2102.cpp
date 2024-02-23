#include <iostream>
using namespace std;

void szyfruj(int key, char text[]) {
	int len = strlen(text);
    char letter;

    for (int i = 0; i < len; i++) {
        letter = text[i];
        if (letter >= 'a' && letter <= 'z'){
            letter = letter + key;
            if (letter > 'z') {
                letter = letter - 'z' + 'a' - 1;
            } else if (letter < 'a') {
                letter = 'z' - ('a' - letter) + 1;
            }
            text[i] = letter;
         }
         else if (letter >= 'A' && letter <= 'Z'){
            letter = letter + key;
            if (letter > 'Z'){
                letter = letter - 'Z' + 'A' - 1;
            } else if (letter < 'A') {
                letter = 'Z' - ('A' - letter) + 1;
            }
            text[i] = letter;
         }
    }
}

int main() {
    char text[1024];
    int key;
	cout<<"Podaj tekst: ";
    cin.getline(text, sizeof(text));
	cout<<"Podaj klucz od -26 do 26: ";
	cin>>key;
	
	szyfruj(key,text);
	cout<<"Po zaszyfrowaniu: "<<text<<endl;

	return 0;
}
