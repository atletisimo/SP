#include <iostream>
using namespace std;

int main() {
    int stats[5] = {0}; // статистика за позициите 0 до 4
    int number;

    while (cin >> number) {
        if (number <= 0 || number > 99999) continue; // игнорира невалидни броеви

        int temp = number;
        int maxDigit = -1;
        int position = 0;
        int maxPos = -1;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit > maxDigit) {
                maxDigit = digit;
                maxPos = position;
            }
            temp /= 10;
            position++;
        }

        if (maxPos >= 0 && maxPos < 5) {
            stats[maxPos]++;
        }
    }

    // Печати статистика
    for (int i = 0; i < 5; i++) {
        cout << i << ": " << stats[i] << endl;
    }

    return 0;
}
