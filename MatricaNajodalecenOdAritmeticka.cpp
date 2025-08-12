/*Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата.
 Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот
 во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица.
 Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот.
 Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

 */
#include<iostream>
using namespace std;
double apsolutna(double x) {
    if (x<0) {
        return -x;
    }
    else {
        return x;
    }
}
int main() {
    int matrica[100][100];
    int n,m;//redici,koloni
    cin>>n>>m;
    //se vnesuvaat elementi na matricata
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>matrica[i][j];
        }
    }

    int niza[100];
    // секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата
    // што е најоддалечен од аритметичката средина во рамки на таа редица
    for (int i=0;i<n;i++) {
        double sum=0;
        for (int j=0;j<m;j++) {
            //int aritmetickaSredina=matrica[i][j]/m;
            sum+=matrica[i][j];
            double prosek=sum/m;
            double maxOdalecenost=-1;
            int vrednostNajodalecen=matrica[i][0];

            for (int j=0;j<m;j++) {
                double odalecenost=apsolutna(matrica[i][j]-prosek);
                if (odalecenost>maxOdalecenost) {
                    maxOdalecenost=odalecenost;
                    vrednostNajodalecen=matrica[i][j];
                }
            }
            niza[i]=vrednostNajodalecen;
        }


    }
    for (int i=0;i<n;i++) {
        cout<<niza[i]<<endl;
        cout<<endl;
    }

}
