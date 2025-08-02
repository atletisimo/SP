/*
 *Да се напише функција која ќе одредува дали една текстуална низа е подниза на друга текстуална низа.\
 *
 */
#include<iostream>
#include<cstring>
using namespace std;
int daliPodniza(char *str1,char *str2) {
    //str2 podniza na str1 znaci da e pomala od nejze
    int len1=strlen(str1);
    int len2=strlen(str2);
    if (len1<len2) {
        return 0;
    }
    if (strstr(str1,str2)) {
        return 1;
    }
    else {
        return 0;
    }

}
int main() {
    char str1[100];
    char str2[100];
    cin.getline(str1,100);
    cin.getline(str2,100);
    if (daliPodniza(str1,str2)) {
        cout<<"Podniza e";
    }
    else {
        cout<<"Ne e podniza";
    }
}
