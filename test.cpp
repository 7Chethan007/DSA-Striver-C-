#include<bits/stdc++.h>
using namespace std;

void tables(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << "\n";
    }
    cout << "\n";
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Multiplication table of " << n << ":\n";
    tables(n);

    return 0;
}