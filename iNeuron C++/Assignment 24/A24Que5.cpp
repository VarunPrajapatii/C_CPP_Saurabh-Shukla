// Que5
// 5. Define a function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>
using namespace std;

bool isFibonacci(int n) {
    int a = 0, b = 1, c = 0;

    while (c <= n) {
        if (c == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

int main() {
    int n;
    cout << "This program checks whether a given number is a term in the Fibonacci series or not." << endl;
    cout << "Enter number: ";
    cin >> n;

    if (isFibonacci(n)) {
        cout << "Number is in the Fibonacci series." << endl;
    } else {
        cout << "Number is not in the Fibonacci series." << endl;
    }
    return 0;
}
