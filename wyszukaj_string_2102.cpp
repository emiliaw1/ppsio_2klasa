#include <iostream>
using namespace std;

int findSubstring(string text, string toFind) {
    if(text.length()<toFind.length()) {
        return -1;
    }
    int j = 0;
    for(int i=0; i<text.length(); i++) {
        if (text[i] != toFind[j]) {
            j=0;
        } else {
            j++;
        }
        if (j == toFind.length()) {
            return i - toFind.length() + 1;
        }
    }
    return -1;
}

int main() {
    char text[1024];
    char toFind[1024];
    cout << "Wpisz tekst: " << endl;
    cin.getline(text, sizeof(text));
    cout << "Wpisz wyraz do wyszukania: " << endl;
    cin.getline(toFind, sizeof(toFind));
    cout << findSubstring(text, toFind);
}
