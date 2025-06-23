/*
Седло-точка во матрица е елемент што е:

најмал во својот ред, и

најголем во својата колона.

3  8  4  
2  7  9  
5  1  6  
Во вториот ред: 2 7 9 → 2 е најмал во редот.

Во првата колона: 3 2 5 → 2 не е најголем → ❌ не е седло-точка.

Во третиот ред: 5 1 6 → 1 е најмал во редот, но 1 е најмал и во колоната → ❌ не е седло-точка.

Ако постои елемент што ги исполнува двата услови → тоа е седло-точка.


#include<iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Vnesi broj na redici i koloni: ";
    cin >> n >> m;

    int a[100][100];

    // Внес на матрицата
    cout << "Vnesi elementi na matricata:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    bool found = false;

    // Провери за секој ред
    for(int i = 0; i < n; i++) {
        int minVal = a[i][0];
        int colIdx = 0;

        // Најди минимум во редот
        for(int j = 1; j < m; j++) {
            if(a[i][j] < minVal) {
                minVal = a[i][j];
                colIdx = j;
            }
        }

        // Провери дали тој минимум е максимум во колоната
        bool isSaddle = true;
        for(int k = 0; k < n; k++) {
            if(a[k][colIdx] > minVal) {
                isSaddle = false;
                break;
            }
        }

        if(isSaddle) {
            cout << "Saddle point najden: " << minVal << " na pozicija (" << i << "," << colIdx << ")" << endl;
            found = true;
        }
    }

    if(!found)
        cout << "Nema saddle point vo matricata." << endl;

    return 0;
}
