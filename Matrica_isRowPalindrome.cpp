#include<iostream>
using namespace std;


bool isRowPalindrome(int row[], int n) {
    for(int i = 0; i < n / 2; i++) {
        if(row[i] != row[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int a[100][100];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

 
    for(int i = 0; i < n; i++) {
        if(isRowPalindrome(a[i], n)) {
            for(int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl; 
        }
    }

    return 0;
}
