/*
(0,0)
     ↘
        ↙
     ↗
↖
Код за ↘ дијагонално од горе-лево до долу-десно



*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100][100];

    // Вчитување
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    // Прво половина (вклучувајќи ја и главната дијагонала)
    for(int k = 0; k < n; k++){
        int i = k, j = 0;
        while(i >= 0){
            cout << a[i][j] << " ";
            i--; j++;
        }
    }

    // Втора половина
    for(int k = 1; k < n; k++){
        int i = n - 1, j = k;
        while(j < n){
            cout << a[i][j] << " ";
            i--; j++;
        }
    }

    return 0;
}
