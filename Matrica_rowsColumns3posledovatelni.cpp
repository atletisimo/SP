/*

Напиши програма која чита матрица со димензии MxN (максимум 100x100).
На почетокот се читаат димензиите, а потоа елементите на матрицата со вредности 0 или 1.
Твојата програма треба да изброи и испечати на стандардниот излез колку редици и колони имаат барем 3 последователни појави на елементи со вредност 1.

*/
#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[100][100];

    // Вчитување на матрицата
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int count = 0;

    // Проверка за редици
    for (int i = 0; i < n; i++) {
        int consecutive = 0;
        bool found = false;
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                consecutive++;
                if (consecutive >= 3) {
                    count++;
                    found = true;
                    break; // ја најдовме оваа редица, нема потреба понатаму
                }
            } else {
                consecutive = 0;
            }
        }
    }

    // Проверка за колони
    for (int j = 0; j < m; j++) {
        int consecutive = 0;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (a[i][j] == 1) {
                consecutive++;
                if (consecutive >= 3) {
                    count++;
                    found = true;
                    break; // ја најдовме оваа колона
                }
            } else {
                consecutive = 0;
            }
        }
    }

    // Печатење на резултатот
    cout << count << endl;

    return 0;
}
/*


#include <iostream>
using namespace std;

int main() {
    int n, m;
    int matrica[100][100];

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrica[i][j];

    int sumRed = 0, sumCol = 0;

    // проверка на редици
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= m - 3; j++) {
            if (matrica[i][j] == 1 && matrica[i][j+1] == 1 && matrica[i][j+2] == 1) {
                sumRed++;
                break; // оваа редица ја броиме еднаш
            }
        }
    }

    // проверка на колони
    for (int j = 0; j < m; j++) {
        for (int i = 0; i <= n - 3; i++) {
            if (matrica[i][j] == 1 && matrica[i+1][j] == 1 && matrica[i+2][j] == 1) {
                sumCol++;
                break; // оваа колона ја броиме еднаш
            }
        }
    }

  
    cout <<sumRed + sumCol << endl;

    return 0;
}




*/
