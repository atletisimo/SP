/*

Сумира 4 соседи околу дадена позиција (горе, долу, лево, десно). Проверки со if се користат за да не се излезе надвор од граници.

🔹 Променливи:
Променлива	Движење/функција
row, col	Централна позиција
a[row-1][col]	горе (ако постои)
a[row+1][col]	долу
a[row][col-1]	лево
a[row][col+1]	десно

🔹 Пример:
Матрица:

Copy
Edit
1 2 3
4 5 6
7 8 9
Ако row=1, col=1 (центар е 5), се собира:

горе: 2

долу: 8

лево: 4

десно: 6
Сума: 2+8+4+6 = 20

  
*/


#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[100][100];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    int row, col;
    cin >> row >> col; // позицијата околу која гледаме

    int sum = 0;

    if(row > 0) sum += a[row - 1][col]; // горе
    if(row < n - 1) sum += a[row + 1][col]; // долу
    if(col > 0) sum += a[row][col - 1]; // лево
    if(col < m - 1) sum += a[row][col + 1]; // десно

    cout << "Сума околу (" << row << "," << col << ") = " << sum << endl;
    return 0;
}
