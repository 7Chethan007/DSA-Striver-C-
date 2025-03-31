#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout<< endl;
    }
}

void pattern2(int n) {
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= i ;j++){
            cout << "* ";
        }
        cout<< endl;
    }
}

void pattern3(int n) {
    for(int i = 1; i <= n; i++) {
        // i + row
        for(int j = 1; j <= i ;j++){
            cout << j << " ";
        }
        cout<< endl;
    }
}

void pattern4(int n) {
    for(int i = 1; i <= n; i++) {
        
        for(int j = 1; j <= i ;j++){
            cout << i << " ";
        }
        cout<< endl;
    }
}

void pattern5(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < (n-i); j++){
            cout << "* ";
        }
        cout<< endl;
    }
}

void pattern6(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n-i+1); j++){
            cout << j << " ";
        }
        cout<< endl;
    }
}

void pattern7(int n) {
    for(int i = 0; i < n; i++) {
        // print space - stars - space  n =5
        //      (n-i+1)-(2*i+1)- (n-i+1)

        // space
        for(int j = 0; j < n-i; j++){
            cout << "  ";
        }
        // stars
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "* ";
        }
        // space
        // for(int j = 0; j < n-i+1; j++){
        //     cout << "  ";
        // }
        cout << endl;
    }
}

void pattern8(int n) {
    for(int i = 0; i < n ; i++) {
        // sapce - stars - space
        // i=j   - (
        // space
        for(int j = 0; j < i; j++){
            cout << "  ";
        }
        // stars
        for(int j = 0; j < 2*(n-i) -1; j++){
            cout << "* ";
        }
        // space
        // for(int j = 0; j < i; j++){
        //     cout << "  ";
        // }
        cout << endl;
    }
}

void pattern9(int n){
    pattern7(n);
    pattern8(n);    
}

void pattern10(int n){
    for(int i = 0; i <= 2*n-1; i++) {
        int stars = i;
        if (i > n) stars = 2*n -i;
        for(int j = 1; j <= stars; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n) {
    int start = 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) start = 1;
        else start = 0;

        for(int j = 0; j <= i; j++){
            cout << start << " ";
            start = 1 - start; // toggle between 0 and 1
        }
        cout << endl;
    }
}

void pattern12(int n) {
    for(int i = 1; i <= n; i++) {
       // numbers space numbers
       for(int j = 1; j <= i; j++) {
        cout << j << " ";
       }

       for(int j = 1; j <= (2*(n-i)); j++) {
        cout << "  ";
       }

       for(int j = i; j >= 1; j--) {
        cout << j << " ";
       }
       cout << endl;

    }
}

void pattern13(int n) {
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern14(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern15(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch < 'A' + (n-i); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern16(int n) {
    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern17(int n) {
    for(int i = 0; i < n; i++) {
        // space - alphabet - space 
        for(int j = 0; j < n-i-1; j++) {
            cout << "  ";
        }

        char ch = 'A';
        int breakpoint = (2*i + 1)/2;
        for(int j = 1; j <= 2*i +1; j++) {
            cout << ch << " ";
            if(j <= breakpoint) ch++;
            else ch--;
        }
        // for(int j = 0; j < n-i-1; j++) {
        //     cout << "  ";
        // }
        cout << endl;
    }
}

void pattern18_1(int n) {
    for(int i = 0; i < n; i++) {
        // Right triangle - Order of Char in reverse
        char ch = 'A' + (n - i - 1);
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern18_2(int n) {
    // pattern18_1 written by me is better as this giver error for n > 5
    for(int i = 0; i < n; i++) {
        for(char ch = 'E' - i; ch <= 'E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern19(int n) {
    // Void Diamond 
    int iniS = 0;
    for(int i = 0; i < n; i++) {
        // stars
        for(int j = 0; j < n-i; j++) {
            cout << "* ";
        }
        // space
        for(int j = 0; j < iniS; j++) {
            cout << "  ";
        }
        // stars
        for(int j = 0; j < n-i; j++) {
            cout << "* ";
        }
        // for(int j = n-i; j > 0; j--) {
        //     cout << "* ";
        // }
        iniS += 2;
        cout << endl;
    }

    iniS = 2 * n - 2;
    for(int i = 0; i < n; i++) {
        // stars
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        // space
        for(int j = 0; j < iniS; j++) {
            cout << "  ";
        }
        // stars
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        // for(int j = n-i; j > 0; j--) {
        //     cout << "* ";
        // }
        iniS -= 2;
        cout << endl;
    }
}

void pattern20(int n) {
    int space = 2*n - 2;
    for (int i = 1; i <= 2*n-1; i++)
    {
        // stars
        int start = i;
        if (i > n) start = 2*n - i;
        for (int j = 1; j <= start; j++)
        {
            cout << "* ";
        }
        // space
        for(int j = 1; j <= space; j++) {
            cout << "  ";
        }

        // stars
        for (int j = 1; j <= start; j++)
        {
            cout << "* ";
        }
        cout << endl;
        if (i < n) space -= 2;
        else space += 2;

    }
    
}

void pattern21(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void pattern22(int n) {
    for(int i = 0; i < 2*n -1; i++) {
        for(int j = 0; j < 2*n -1; j++) {
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int bottom = (2*n - 2) - i;

            cout << n - min(min(top, left), min(right, bottom)) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern22(n);
}