/*
Create a program that generates 20 random numbers from the interval 10-50 into an array.
Then create a function that prints only the numbers that are NOT prime from that array.
Print the initial array and the desired array
*/

#include <algorithm>
#include <iostream>
#include <random>
using namespace std;

bool isPrime(int number) {
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int array[20];
    srand(time(0));
    rand();
    for (int i = 0; i < 20; i++) {
        array[i] = rand() % (50 - 10 + 1) + 10;
    }
    cout << "Array in original form: ";
    for (int i = 0; i < 20; i++) {
        cout << array[i] << " ";
    }

    sort(begin(array), end(array));
    cout << "\nArray sorted in ascending order: ";
    for (int i = 0; i < 20; i++) {
        cout << array[i] << " ";
    }

    cout << "\nArray in modified form (without prime numbers): ";
    for (int i = 0; i < 20; i++) {
        if (!isPrime(array[i])) {
            cout << array[i] << " ";
        }
    }
}
