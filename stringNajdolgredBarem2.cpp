/*
 *Од стандарден влез се читаат непознат број на редови додека не се прочита 0. Да се најде најдолгиот ред во кој има барем 2 цифри.
 *Потоа, на стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра
 *(заедно со тие 2 цифри) во истиот редослед.Доколку има повеќе такви редови се печати последниот.
 *Се претпоставува дека ниту еден ред не е подолг од 100 знаци.
 */
#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str[100];
int maxLen=0;
    char longestString[100];
    while (true) {
        cin.getline(str,100);
        if (strcmp(str,"0")==0) {
            break;
        }
        int len=strlen(str);
        int counter=0;
        for (int i=0;i<strlen(str);i++) {
            if (isdigit(str[i])) {
                counter++;
            }
        }

            if (counter>=2) {
                if (len>=maxLen) {
                    strcpy(longestString,str);
                    maxLen=len;
                }
        }
    }
    //најди прва и последна цифра
    int first=-1,last=-1;
    for (int i=0;i<strlen(longestString);i++) {
        if (isdigit(longestString[i])) {
            if (first==-1) {
                first=i;
            }
            last=i;
        }
    }
    if (first!=-1&&last!=-1&&last>first) {
        for (int i=first;i<=last;i++) {
            cout<<longestString[i];

        }

    }

}
