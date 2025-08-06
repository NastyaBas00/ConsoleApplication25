
#include <iostream>
#include "Header.h"

using namespace std;

int main() {

    int arr[] = {34, 6, 98, 21, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "mass: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    ascending(arr, size);
    cout << "ascending: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    descending(arr, size);
    cout << "descending: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

}

