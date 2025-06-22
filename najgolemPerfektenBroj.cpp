#include<iostream>
using namespace std;

// Проверка дали бројот е перфектен
bool isPerfect(int n) {
    int sum = 0;
    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main() {
    int n;
    cout << "Vnesi broj: ";
    cin >> n;

    int lastPerfect = -1;
    for(int i = 1; i <= n; i++) {
        if(isPerfect(i)) {
            lastPerfect = i;
        }
    }

    if(lastPerfect != -1) {
        cout << "Najgolemiot perfektен broj do " << n << " e: " << lastPerfect << endl;
    } else {
        cout << "Nema perfektни broevi do " << n << endl;
    }

    return 0;
}
