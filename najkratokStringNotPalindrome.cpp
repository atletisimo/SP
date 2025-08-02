/*
*На влез е даден природен број,N (N<=100) и во следните N редови е даден по еден стринг со должина помала од 80 знаци.
*Вашата програма треба на излез да го отпечати најкраткиот стринг кој не е палиндром(стринг кој потполно исто се чита и од лево на десно и од десно на лево).
Доколку има повеќе такви стрингови, да се отпечати тој што е лексикографски најголем
(според редоследот од функцијатаstrcmp()).
Ако нема ниту еден таков стринг, на екран се печати NEMA
 */


#include<iostream>
#include<cstring>
using namespace std;
int notPalindrome(char *str) {
    for (int i = 0; i < strlen(str)/2; i++) {
        if (str[i]!=str[strlen(str)-i-1]){
            return 1;//1 vrakja bidejki ne e palindrom
        }
    }
    return 0;
}
int main() {
    int n;
    int minLen=9999;
    char minStr[100];
    char str[80];
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cin.getline(str,80);
        if (notPalindrome(str)) {
            if (minLen>strlen(str)) {
                strcpy(minStr,str);
                minLen=strlen(str);
            }
            else if (strlen(str)==minLen&& strcmp(str,minStr)>0) {
                strcpy(minStr,str);
                minLen=strlen(str);


            }

        }
    }
    if (minLen!=9999) {
        cout<<minStr<<endl;
    }
    else {
        cout<<"NEMA"<<endl;
    }

