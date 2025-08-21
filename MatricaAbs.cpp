/*
Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата. Да се трансформира матрицата така што средниот елемент 
во секоја редица ќе се замени со разликата (по апсолутна вредност) на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата.
Ако матрицата има парен број колони, се менува вредноста на средните два елемента. Средниот/те елемент/и влегува/ат во сумите
(при непарен број на колони, средниот елемент влегува во двете суми!). Да се испечати на екран променетата матрица. Пример.
Влез: m = 4 n = 4 
1 3 -5 4 
2 10 2 10 
7 2 3 5 
3 2 10 3 
Излез: 1 5 5 4
2 0 0 10 
7 1 1 5 
3 8 8 3
*/
#include <iostream>
using namespace std;

// Сопствена имплементација на апсолутна вредност
int myAbs(int x) {
    if (x < 0) return -x;
    return x;
}

int main() {
    int m, n;
    cin >> m >> n;
    
    int matrix[100][100]; // бидејќи m,n <= 100

    // Вчитување на матрицата
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Обработка на редиците
    for (int i = 0; i < m; i++) {
        int mid = n / 2;
        int left_sum = 0, right_sum = 0;

        if (n % 2 != 0) {
            // непарен број колони → средниот елемент влегува во двете суми
            for (int j = 0; j < mid; j++) {
                left_sum += matrix[i][j];
                right_sum += matrix[i][mid + 1 + j];
            }
            left_sum += matrix[i][mid];
            right_sum += matrix[i][mid];

            matrix[i][mid] = myAbs(left_sum - right_sum);
        } else {
            // парен број колони → две половини
            for (int j = 0; j < mid; j++) {
                left_sum += matrix[i][j];
                right_sum += matrix[i][mid + j];
            }
            matrix[i][mid - 1] = myAbs(left_sum - right_sum);
            matrix[i][mid] = myAbs(left_sum - right_sum);
        }
    }

    // Печатење на резултатот
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
Трансформација на секоја редица

Клучниот дел.

for (int i = 0; i < m; i++) {
    int mid = n / 2;
    int left_sum = 0, right_sum = 0;

    if (n % 2 != 0) {
        // непарен број колони → средниот елемент влегува во двете суми
        for (int j = 0; j < mid; j++) {
            left_sum += matrix[i][j];
            right_sum += matrix[i][mid + 1 + j];
        }
        left_sum += matrix[i][mid];
        right_sum += matrix[i][mid];

        matrix[i][mid] = myAbs(left_sum - right_sum);
    } else {
        // парен број колони → две половини
        for (int j = 0; j < mid; j++) {
            left_sum += matrix[i][j];
            right_sum += matrix[i][mid + j];
        }
        matrix[i][mid - 1] = myAbs(left_sum - right_sum);
        matrix[i][mid] = myAbs(left_sum - right_sum);
    }
}

5.1) mid = n / 2;

Целобројното делење „сече“ надолу.

Ако n е непарно, на пример n = 5, тогаш mid = 2 → индексот на средниот столб е 2 (0-базирано броење).

Ако n е парно, на пример n = 4, тогаш mid = 2; средните два столба се mid-1 = 1 и mid = 2.

5.2) Суми кога n е непарно

Пример: n = 5, индекси 0 1 2 3 4, mid = 2.

Спецификација: „Средниот елемент влегува во двете суми!“
Тоа го правиме експлицитно:

лева половина: 0..mid-1 (т.е. 0,1) плус mid;

десна половина: mid+1..n-1 (т.е. 3,4) плус mid.

Кодот:

for (int j = 0; j < mid; j++) {
    left_sum += matrix[i][j];           // 0..mid-1
    right_sum += matrix[i][mid + 1 + j]; // mid+1..n-1
}
left_sum += matrix[i][mid]; // средниот влегува и тука
right_sum += matrix[i][mid]; // и тука


Потоа ја заменуваме само средната позиција:

matrix[i][mid] = myAbs(left_sum - right_sum);

Зошто прво сумираме, па менуваме?

Сумирањето мора да се направи врз оригиналните вредности на редицата.

Ние ги менуваме средните елементи после пресметките → така не влијаеме на сопствените суми.

*/
