#include<bits/stdc++.h>
using namespace std;

// Print Name N times
void printName(int i, int n) {
    if(i > n) return;
    cout << "Chethan" << endl;
    printName(i+1, n);
}

// Print 1 to N
void linear1(int i, int n) {
    if (i  > n) return;
    cout << i << " ";
    linear1(i+1, n);
}

// Print N to 1
void linear2(int i, int n) {
    if (i  < 1) return;
    cout << i << " ";
    linear2(i-1, n);
}

// Print 1 to N using Backtracking
void back1(int i, int n) {
    if (i  < 1) return;
    back1(i-1, n);
    cout << i << " ";
}

//  Print N to 1 using Backtracking but not using (i-1)
void back2(int i, int n) {
    if (i  > n) return;
    back2(i+1, n);
    cout << i << " ";
}

int main() {
    int n;
    cin >> n;
    back2(1,n);
    cout<<endl;
}