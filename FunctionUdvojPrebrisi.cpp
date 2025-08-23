/*
*Напишете програма што ќе ја трансформира низата на следниов начин: почнувајќи од почетокот на низата,
за секој елемент што е еднаков на следниот елемент во низата, удвојте ја вредноста на првиот и пребришете ја
втората со 0. После тоа, преуредете ја низата така што сите нули ќе бидат поместени на крајот од низата,
задржувајќи го редоследот на другите елементи.
 */
#include<iostream>
using namespace std;
void transform(int a[],int n) {
    for (int i=0;i<n-1;i++) {
        if (a[i]==a[i+1]) {
            a[i]=a[i]*2;
            a[i+1]=0;
        }
    }
}
void pomestiNuliNaKraj(int a[],int n) {
    int pos=0;
    for (int i=0;i<n;i++) {
        if (a[i]!=0) {
            a[pos++]=a[i];
        }

    }
    while (pos<n) {
        a[pos++]=0;
    }

}
int main() {
    int n;
    int niza[100];
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>niza[i];
    }
    transform(niza,n);
    pomestiNuliNaKraj(niza,n);
    for (int i=0;i<n;i++) {
        cout<<niza[i]<<" "<<endl;
    }

}
