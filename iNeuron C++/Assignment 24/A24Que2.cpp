// Que2
// 2. Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

int HVD(int a) {
    int maxDigit = 0;
    a = abs(a);
    while (a != 0) {
        int x = a % 10;
        if (x > maxDigit) {
            maxDigit = x;
        }
        a = a / 10;
    }
    return maxDigit;
}

int main() {
    int n;
    cout << "This program finds the highest value digit in a given number." << endl;
    cout << "Enter a number: ";
    cin >> n;

    int highestDigit = HVD(n);

    cout << "The highest value digit is " << highestDigit << "." << endl;
}
