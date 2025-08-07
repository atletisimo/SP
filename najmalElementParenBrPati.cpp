#include <iostream>
using namespace std;

int par(int a[], int n) {
    int minElem = 101; // бидејќи N <= 100, сите елементи се <= 100
    bool found = false;

    for (int i = 0; i < n; i++) {
        int count = 0;

        // Провери дали оваа вредност веќе е проверена
        bool alreadyChecked = false;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                alreadyChecked = true;
                break;
            }
        }
        if (alreadyChecked) continue;

        // Брои колку пати се појавува a[i]
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) {
                count++;
            }
        }

        // Дали се појавува парен број пати?
        if (count % 2 == 0) {
            if (a[i] < minElem) {
                minElem = a[i];
                found = true;
            }
        }
    }

    if (found)
        return minElem;
    else
        return 0;
}

int main() {
    int n;
    int a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << par(a, n) << endl;
}
