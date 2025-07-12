// Среден број е број кај кој секоја следна цифра е помала на претходната
// (гледајќи од најзначајната кон најмалку значајната).
// На пример, 7421. Едноцифрените броеви не се средни броеви.
// Да се напише програма во која прво се внесува број N кој го определува вкупниот број на броеви кои
// ќе бидат внесени од тастатура. Потоа се внесуваат N-те броеви, еден по еден.
// На излез, потребно е да се испечатат сите броеви кои го исполнуваат условот за среден број,
// а потоа да се отпечати и минималниот среден број од внесените броеви.
// Доколку не постои број кој го задоволува условот се печати вредност -1.
// Пример за влез:
// 5
// 435
// 643
// 12234
// 721
// 7720
//
// Пример за излез:
// 643
// 721
// 643
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
