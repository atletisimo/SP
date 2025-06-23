#include<iostream>
using namespace std;

int main() {
    int n;
    int a[100][100];

    // Внесување на димензија и елементи
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Наоѓање максимум во секоја колона
    for(int j = 0; j < n; j++) {
        int maxCol = a[0][j];  // земаме првиот елемент како почетен максимум
        for(int i = 1; i < n; i++) {
            if(a[i][j] > maxCol) {
                maxCol = a[i][j];
            }
        }
        cout << "Максимум во колона " << j << " е: " << maxCol << endl;
    }

    return 0;
}
