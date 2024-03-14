#include <iostream>
#include "Sortownik.h"
using namespace std;

vector<int> Sortownik::bubble_sort(vector<int>){

	void bubble_sort(int arr[], int n){
		int i, j;
		for (i = 0; i < n - 1; i++) {
			for (j = 0; j < n - i - 1; j++)
				if (arr[j] > arr[j + 1])
					swap(arr[j], arr[j + 1]);
		}
	}

	return vector<int>();
}

vector<int> Sortownik::insert_sort(vector<int>)
{
	
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}

	return vector<int>();
}

vector<int> Sortownik::selection_sort(vector<int>)
{
	int i, j, min_idx;
	for (i = 0; i < n - 1; i++) {
	min_idx = i;
	for (j = i + 1; j < n; j++) {
		if (arr[j] < arr[min_idx])
			min_idx = j;
	}
	if (min_idx != i)
		swap(arr[min_idx], arr[i])

	return vector<int>();
}

int main() {
	int arr[] = { 5, 2, 3, 10, 4 };
	int N = sizeof(arr) / sizeof(arr[0]);

	arr = bubble_sort(arr, N);

}
