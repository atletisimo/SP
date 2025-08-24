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


            stats[maxPos]++;
        }


    // Печати статистика
    for (int i = 0; i < 5; i++) {
        cout << i << ": " << stats[i] << endl;
    }

    return 0;
}


/*Внатрешниот while (temp > 0) служи да ја најде најголемата цифра и нејзината прва позиција (оддесно). Таму се вртиш низ сите цифри на тековниот број.

Ако го ставиш stats[maxPos]++ внатре во тој циклус, ќе се зголеми повеќе пати за истиот број (секој пат кога ќе се обработи цифра). А тебе ти треба само еднаш на крајот за целиот број.

Значи редоследот е:

Внесеш број.

Го скенираш цел број (цифра по цифра).

Најди ја најголемата цифра и нејзината позиција (maxPos).

После што заврши внатрешниот while (значи го имаш конечниот maxPos), тогаш кажуваш: „Аха, за овој број најголемата цифра беше на позиција maxPos“ → и таму го зголемуваш бројачот:
        */
     
