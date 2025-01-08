/*
Recursive functions - functions that call themselves.
Function to calculate the sum of the first n natural numbers.
*/

#include <iostream>
using namespace std;

int sum(int n) {
    if (n==1) {
        return 1;
    } else {
        return sum(n - 1) + n;
    }
}

int main() {
    int n;
    do {
        cout << "Enter a number: ";
        cin >> n;
    } while (n < 1);
    cout << "Sum of the numbers up to " << n << " is: " << sum(n);
}
