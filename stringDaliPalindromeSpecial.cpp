/*
*Од стандарден влез се чита цел број (N<=100)и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци
(без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром
(се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи, се печати
"Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.
 */
#include<iostream>
#include<cstring>
using namespace std;
int isPalindrome(char *str) {
    for (int i=0;i<strlen(str)/2;i++) {
        if (str[i]!=str[strlen(str)-1-i])

            return 0;
    }
    return 1;
}
int hasSpecialCharcater(char *str) {
    for (int i=0;i<strlen(str);i++) {
        if (!isalnum(str[i])) {
            return 1;
        }

    }
    return 0;
}
int main() {
    int n;
    char str[100];
    int maxLen=0;
    char maxStr[100];
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++) {
        cin.getline(str,100);

        int dolzina=strlen(str);
        if ( isPalindrome(str)&&hasSpecialCharcater(str) ) {
            if (dolzina>maxLen) {
                strcpy(maxStr,str);
                maxLen=dolzina;


            }
        }


    }
    if (maxLen==0) {
        cout<<"NEMA";
    }
    else{
        cout<<maxStr;

    }
}
