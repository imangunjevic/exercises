/*
Create a function that returns the distance between the sum of the even and odd digits of a four-digit number. Ensure that the entered number is four-digit.
E.g. 4170
The function should return 4
E.g. 2615
The function should return 2
*/

#include <iostream>
using namespace std;

int distanceBetweenSums(int number) {
    int a, b, c, d;
    a = number / 1000;
    b = (number % 1000) / 100;
    c = (number % 100) / 10;
    d = number % 10;

    int sumEven = 0;
    int sumOdd = 0;

    if (a % 2 == 0) {
        sumEven = sumEven + a;
    } else {
        sumOdd = sumOdd + a;
    }
    if (b % 2 == 0) {
        sumEven = sumEven + b;
    } else {
        sumOdd = sumOdd + b;
    }
    if (c % 2 == 0) {
        sumEven = sumEven + c;
    } else {
        sumOdd = sumOdd + c;
    }
    if (d % 2 == 0) {
        sumEven = sumEven + d;
    } else {
        sumOdd = sumOdd + d;
    }

    return abs(sumEven - sumOdd);
}

int main() {
    int number;
    do {
        cout << "Enter a four digit number: ";
        cin >> number;
        if (number < 1000 || number > 9999) {
            cout << "Number doesnt have four digits!\n";
        }
    } while (number < 1000 || number > 9999);
    cout << "Distance between the sum of the even and odd digits of " << number << " is " << distanceBetweenSums(number);
}
