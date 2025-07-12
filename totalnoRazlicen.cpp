/*
Од стандарден влез се внесуваат два цели броја N и Х.

Да се најде најблискот број помал од N коj е тотално различен од бројот Х.

Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
88 7 =>86

Задачата да се реши без употреба на низи и матрици.*/
#include<iostream>
using namespace std;
bool daliRazlicni(int n,int x) {

    while (n>0) {
        int broj_cifra=n%10;
        int kopija_x=x;
        while (kopija_x>0) {
            int posledna_cifra_x=kopija_x%10;

            if (broj_cifra==posledna_cifra_x) {
                return false;
            }
            kopija_x=kopija_x/10;

        }
        n=n/10;
    }
    return true;

}
int main() {
    int n,x;
    cin>>n;//8
    cin>>x;//7
    for (int i=n-1;i>0;i--) {
        if (daliRazlicni(i,x)) {
            cout<<i;
            break;
        }
    }



}
