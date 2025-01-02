/*
Create a function that sorts the entered array from smallest to largest and prints it, without the sort function
*/

#include <iostream>
using namespace std;

void ascendingSort(int array[], int size) {
    int temporary;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (array[i] > array[j]) {
                temporary = array[i];
                array[i] = array[j];
                array[j] = temporary;
            }
        }
    }
    cout << "Array sorted in ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
    ascendingSort(array, size);
}
