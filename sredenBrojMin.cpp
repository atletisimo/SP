#include<iostream>
using namespace std;
bool eSreden(int n) {
    if (n<10) {
        return false;//ednocifrenite broevi ne se sredni
    }
 while (n>=10) {
   int posledna=n%10;
     int pretposledna=(n/10)%10;
     if (posledna>pretposledna) {
         return false;
     }
     n/=10;
 }
    return true;
}
int main() {
int n;
    bool najden=false;
    int minNumber=99999;
    cin>>n;
    int num;
    for (int i=0;i<n;i++) {
        cin>>num;
        if (eSreden(num)) {
            cout<<num;
            if (num<minNumber){
                minNumber=num;
        }
            najden=true;

        }
    }
    if (najden) {
        cout<<endl;
        cout<<"Minimalniot sreden broj e: " <<minNumber<<" ";
    }
    else {
        cout<<"-1";
    }
}
