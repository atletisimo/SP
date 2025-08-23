/*
 *Напишете програма што ќе го пресмета најмалиот број на потребни промени на елементите за да се
 трансформира матрицата во симетрична матрица со нулта дијагонала.
 Секој премин на елемент од 0 во 1 или од 1 во 0 се смета за единечна промена.
 По конверзијата, сите елементи на главната дијагонала треба да бидат 0, а матрицата треба да биде симетрична
 во однос на главната дијагонала. Испечатете го минималниот број на потребни транзиции.
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int matrica[100][100];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin>>matrica[i][j];
        }
    }
    int counter=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (matrica[i][j]!=matrica[j][i]){
                matrica[i][j]=matrica[j][i];
                counter++;
            }
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i==j&&matrica[i][j]==1) {
                matrica[i][j]=0;
                counter++;
            }

        }

    }
    cout<<counter<<endl;
}

