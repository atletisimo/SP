/*
Внатрешниот for оди по редови во една колона.

maxCol го чува најголемиот за таа колона.

overallMax се ажурира ако тековниот maxCol е поголем.

overallMax ни треба затоа што од секоја колона ќе наоѓаме по еден најголем елемент (неговото локално maxCol), а на крај сакаме да најдеме кој од тие максимумски е најголем.

За секоја колона j, најди го најголемиот елемент maxCol.

Провери дали тој maxCol е поголем од тековниот overallMax.

Ако е, ажурирај го overallMax.





  */


#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[100][100];
    cin >> n >> m;

    // Внес на матрица
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int overallMax = -1000000; // Многу мал број

    // Итерирање по колони
    for (int j = 0; j < m; j++) {
        int maxCol = a[0][j]; // Почнуваме со првиот елемент во колоната
        for (int i = 1; i < n; i++) {
            if (a[i][j] > maxCol) {
                maxCol = a[i][j];
            }
        }
        // Ажурирај го глобалниот максимум ако треба
        if (maxCol > overallMax) {
            overallMax = maxCol;
        }
    }

    cout << "Најголем максимум од сите колони е: " << overallMax << endl;

    return 0;
}
