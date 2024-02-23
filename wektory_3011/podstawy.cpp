#include <iostream>
#include <vector>

using namespace std;

int main() {
	std::vector<int> tablica;
	tablica.push_back(99);
	tablica.push_back(100);
	tablica.push_back(98);

	for (int i = 0; i < tablica.size(); i++) {
		std::cout << tablica[i];
	}

}
// na spr napisanie wlasnego wektora??????????????????
