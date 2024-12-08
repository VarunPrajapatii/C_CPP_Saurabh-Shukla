// Que4
// 4. Define a function to print Pascal Triangle up to N lines.


#include <iostream>
using namespace std;

int fact(int num) {
    if (num == 0 || num == 1)
        return 1;
    return num * fact(num - 1);
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

void PascalTriangle(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++)
            cout << " ";

        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "This program prints Pascal's Triangle up to N lines." << endl;
    cout << "Enter the number of lines (N): ";
    cin >> N;

    PascalTriangle(N);
    return 0;
}
