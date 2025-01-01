/*
Create a function to multiply two numbers
*/

#include <iostream>
using namespace std;

float multiplication(float a, float b) {
    return a * b;
}

int main() {
    float x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    if (y < 0) {
        cout << x << " * (" << y << ") = " << multiplication(x, y);
    } else {
        cout << x << " * " << y << " = " << multiplication(x, y);
    }
}
