*Да се напише програма која ќе ја отпечати поднизата на дадена текстуална низа (што се внесува од тастатура)
// определена со позицијата и должината, што како параметри се внесуваат од тастатура.
// Поднизата започнува од знакот што се наоѓа на соодветната позиција во текстуалната низа, броејќи од лево.
 */

#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str[100];
    cin.getline(str,100);
    //na dadena textualna niza podnizata da se otpecati
int start,end;
    cin >> start>>end;
    if (start<0||start>=strlen(str)||end<0||end>strlen(str)) {
        cout<<"Error"<<endl;
        return 0;
    }
    for (int i=start;i<end;i++) {
        cout<<str[i];
    }
}
