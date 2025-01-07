/*
The user enters the number of elements and then enters the elements.
Create a function that increases an odd positive number by 1.
Print the initial array and the array after applying the function to each element of the array.
*/

#include <iostream>
using namespace std;

int incrementOddPositiveNumber(int &number) {
    if (number > 0) {
        if (number % 2 != 0) {
            number = number + 1;
        }
    }
    return number;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "\nThe original array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << "\nArray with all odd positive numbers incremented by 1: ";
    for (int i = 0; i < size; i++) {
        incrementOddPositiveNumber(array[i]);
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}
