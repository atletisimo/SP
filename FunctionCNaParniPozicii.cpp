/*Напиши програма која ќе чита непознат број од три цели броеви, и за секоја тројка (a, b, c) ќе го испечати бројот
 *(a или b) што ја содржи цифрата c повеќе пати на парни позиции (позициите се бројат од десно кон лево, а првата позиција е 1).
 */
#include<iostream>
using namespace std;
int cifraCTimes(int n,int c) {
    int counter=0;
    int pos=1;
    while (n>0) {
        int cifra=n%10;
        if (cifra==c&&pos%2==0) {
            counter++;

        }
        pos++;
        n=n/10;
    }
    return counter;
}
int main() {
    int a,b,c;
    while (cin>>a>>b>>c) {
int countA=cifraCTimes(a,c);
       int countB= cifraCTimes(b,c);
        if (countA>=countB) {
            cout<<a<<endl;

        }
        else {
            cout<<b<<endl;
        }
    }
}
