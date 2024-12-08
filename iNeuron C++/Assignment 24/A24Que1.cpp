// Que1
// 1. Define a function to check whether a given number is a Prime number or not.

#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number to check whether it's a prime number or not: ";
    cin >> n;
    
    if (checkPrime(n)) {
        cout << "It's a prime number.";
    } else {
        cout << "It's not a prime number.";
    }
}