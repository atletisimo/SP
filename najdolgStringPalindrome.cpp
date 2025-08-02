/*
 *
 *
*На влез е даден природен број N (N<=100) и во следните N редови е даден по еден стринг со должина помала од 80 знаци.
*Вашата програма треба на излез да го отпечати најдолгиот стринг кој е палиндром(стринг кој потполно исто се чита и од лево
*на десно и од десно на лево).
Доколку има повеќе такви стрингови, да се отпечати тој што е лексикографски најмал (според редоследот од функцијата strcmp()).
Ако нема ниту еден таков стринг, на екран се печати NEMA.
 *
 */
#include<iostream>
#include<cstring>
using namespace std;
int isPalindrome(char *str) {
 for (int i=0;i<strlen(str)/2;i++) {
  if (str[i]!=str[strlen(str)-i-1]) {
   return 0;
  }

 }
 return 1;
}
int main() {
 int n;
 cin>>n;
 cin.ignore();
 char str[100];
 char maxPalindrome[100];//ke go cuva maxPalindrome
 int maxLen=0;
 for (int i=0;i<n;i++) {
  cin.getline(str,100);

  if (isPalindrome(str)) {
   int len=strlen(str);
   if (len>maxLen) {
    strcpy(maxPalindrome,str);
    maxLen=len;
   }
   //ako se so ista dolzina zemi go leksikografski pomaliot
   else if(len==maxLen&&strcmp(str,maxPalindrome)<0) {
    strcpy(maxPalindrome,str);
    maxLen=len;
   }
  }
 }
 if (maxLen>0) {
  cout<<maxPalindrome;

 }
 else {
  cout<<"NEMA";
 }
}
