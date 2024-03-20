#include <iostream>
#include <vector>
#include "Sortownik.h"

using namespace std;

vector<int> Sortownik::bubble_sort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}

vector<int> Sortownik::insertion_sort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    return arr;
}

vector<int> Sortownik::selection_sort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    return arr;
}

void print_vector(vector<int> arr) 
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}


int main()
{
    vector<int> arr = {5, 2, 7, 1, 9, 3};
    cout << "Wektor nieposortowany: ";
    print_vector(arr);

    vector<int> output_bubble_sort = Sortownik::bubble_sort(arr);
    cout << "Wektor posortowany przez bubble_sort: ";
    print_vector(output_bubble_sort);

    vector<int> output_insertion_sort = Sortownik::insertion_sort(arr);
    cout << "Wektor posortowany przez insertion_sort: ";
    print_vector(output_insertion_sort);

    vector<int> output_selection_sort = Sortownik::selection_sort(arr);
    cout << "Wektor posortowany przez selection_sort: ";
    print_vector(output_selection_sort);

    return 0;
}
