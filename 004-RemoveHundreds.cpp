/*
It is necessary to create a function remove_hundreds(int number) that removes if there is a hundred from the record of a positive integer
The program should run until the user enters the number 0.
Input: 1210
Output: 110

Input: 18
Output: 18

Input: 1412412
Output: 141212
*/

#include <iostream>
using namespace std;

void removeHundreds(int number){
    if(number < 100) {
        cout << "Output: " << number;
    }else {
        int lastTwoDigits;
        lastTwoDigits = number % 100;
        number = number / 1000;
        number = number*100+lastTwoDigits;
        cout << "Output: " << number;
    }
}

int main() {
    int number;
    do {
        cout << "Input: ";
        cin >> number;
        if(number < 0) {
            cout << "It must be positive!\n";
        }else {
            removeHundreds(number);
        }
    }while(number != 0);
}
