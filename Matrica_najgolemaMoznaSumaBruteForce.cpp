/*

bestTop и bestBottom → од кој до кој ред е подматрицата

bestLeft и bestRight → од која до која колона е подматрицата

надворешната i се движи по редиците startRow..endRow

внатрешната j се движи по колоните startCol..endCol

currSum акумулира збир од сите елементи во таа подматрица


  */


#include <iostream>
using namespace std;

int main() {
    int n = 3, m = 4;
    int a[3][4] = {
        { 1,  2, -1,  4},
        {-2,  3,  4, -1},
        { 5, -3,  2,  2}
    };

    // Наместо INT_MIN, ставаме првата можна сума од матрицата
    int maxSum = a[0][0];

    // Координати на најдобрата подматрица (опционално)
    int bestTop = 0, bestLeft = 0, bestBottom = 0, bestRight = 0;

    // Четири вложени циклуси за сите можни подматрици
    for (int startRow = 0; startRow < n; startRow++) {
        for (int endRow = startRow; endRow < n; endRow++) {
            for (int startCol = 0; startCol < m; startCol++) {
                for (int endCol = startCol; endCol < m; endCol++) {

                    // Пресметај сума на подматрицата
                    int currSum = 0;
                    for (int i = startRow; i <= endRow; i++) {
                        for (int j = startCol; j <= endCol; j++) {
                            currSum += a[i][j];
                        }
                    }

                    // Ако е подобра сума, ажурирај
                    if (currSum > maxSum) {
                        maxSum = currSum;
                        bestTop = startRow;
                        bestLeft = startCol;
                        bestBottom = endRow;
                        bestRight = endCol;
                    }
                }
            }
        }
    }

    cout << "Најголема сума: " << maxSum << endl;
    cout << "Подматрица од (" << bestTop << "," << bestLeft << ") до (" << bestBottom << "," << bestRight << "):" << endl;

    for (int i = bestTop; i <= bestBottom; i++) {
        for (int j = bestLeft; j <= bestRight; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
