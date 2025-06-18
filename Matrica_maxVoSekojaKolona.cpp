#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    for(int j = 0; j < m; j++) {
        int maxVal = a[0][j]; // почнува со првиот елемент од колоната
        for(int i = 1; i < n; i++) {
            if(a[i][j] > maxVal)
                maxVal = a[i][j];
        }
        cout << "Максимум во колона " << j << ": " << maxVal << endl;
    }

    return 0;
}
