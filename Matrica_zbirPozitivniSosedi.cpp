/*
 Напишете програма каде што матрицата А прочитана од SI (максималната вредност на димензиите на матрицата е 100)
 се трансформира во нова матрица B. Секој елемент од новата матрица B е збир од позитивни соседи на соодветниот елемент
 од матрицата A. Испечатете ја новата матрица B на стандардниот излез.
 */


#include<iostream>
using namespace std;
int main() {
    int n,m;
    int matrica[100][100];
    int b[100][100];
    cin>>n>>m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>matrica[i][j];
        }
    }
for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
        int suma=0;
        //gore
        if (i-1>=0 && matrica[i-1][j]>0) {
            suma+=matrica[i-1][j];
        }
        //dole
        if (i+1<n &&matrica[i+1][j]>0) {
            suma+=matrica[i+1][j];
        }
        //levo
        if (j-1>=0 && matrica[i][j-1]>0) {
            suma+=matrica[i][j-1];
        }
        //desno
        if (j+1<m &&matrica[i][j+1]>0) {
            suma+=matrica[i][j+1];
        }
        b[i][j]=suma;
    }
}
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cout<<b[i][j];
        }
        cout<<endl;
    }



}
