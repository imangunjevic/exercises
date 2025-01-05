/*
Create a program that generates 15 random numbers from the interval 27-93.
It is necessary to create a function that places numbers that are less than the last generated number into a new array.
Print the generated array and the newly obtained array in the main program.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void lessThanLast(int array[], int newArray[], int &counter) {
    counter = 0;
    for (int i = 0; i < 14; i++) {
        if (array[i] < array[14]) {
            newArray[counter++] = array[i];
        }
    }
}

int main() {
    int array[15];
    int newArray[15];
    int counter = 0;
    srand(time(NULL));

    cout << "Original array: \n";
    for (int i = 0; i < 15; i++) {
        array[i] = rand() % (93 - 27 + 1) + 27;
        cout << array[i] << " ";
    }

    lessThanLast(array, newArray, counter);

    if (counter == 0) {
        cout << "\nThere are no numbers smaller than the last generated number";
    } else {
        cout << "\nSecond array: \n";
        for (int i = 0; i < counter; i++) {
            cout << newArray[i] << " ";
        }
    }
}
