/*
Пример:

Голема матрица 5x5

Мал шаблон 2x2
(ако pattern е дел од matrix, испечати YES, инаку NO)
🔍 Објаснување:
Се движиме низ сите можни позиции каде што може да се стави шаблонот.

За секоја позиција проверуваме дали сите елементи совпаѓаат.

Ако се совпаѓаат → YES.



  */




#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[100][100];

    // Вчитување на големата матрица
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];

    int p, q;
    cin >> p >> q;
    int pattern[100][100];

    // Вчитување на шаблонот
    for(int i = 0; i < p; i++)
        for(int j = 0; j < q; j++)
            cin >> pattern[i][j];

    bool found = false;

    for(int i = 0; i <= n - p; i++) {
        for(int j = 0; j <= m - q; j++) {
            bool match = true;
            for(int x = 0; x < p; x++) {
                for(int y = 0; y < q; y++) {
                    if(matrix[i + x][j + y] != pattern[x][y]) {
                        match = false;
                        break;
                    }
                }
                if(!match) break;
            }
            if(match) {
                found = true;
                break;
            }
        }
        if(found) break;
    }

    if(found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
