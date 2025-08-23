/*
Напишете програма што ќе ја трансформира низата така што секој елемент од оригиналната низа ќе се замени со бројот што се појавува на најмалку значајната цифра (најдесната) во самиот број.
/*
  #include<iostream>
using namespace std;
int najmalceZnacajna(int n) {
    int temp=n;
    int last=temp%10;
    int counter=0;
while (n>0) {
    if (last==n%10)
    counter++;
    n=n/10;
}
return counter;


}

int main() {
    int n;
    cin>>n;
    int broevi[100];
    for(int i=0;i<n;i++) {
        cin>>broevi[i];
        broevi[i]=najmalceZnacajna(broevi[i]);
    }
    for(int i=0;i<n;i++) {
        cout<<broevi[i]<<endl;
    }}
