/* Да се напише функција која за дадена текстуална низа ќе одредува дали таа е доволно сложена за да биде лозинка.
//Секоја лозинка мора да содржи барем една буква, барем една цифра и барем еден специјален знак
 *
 *
 *
 */
#include<iostream>
#include<cstring>
using namespace std;
int daliSlozena(char *str1) {
 int bukva=0;
 int cifra=0;
 int specZnak=0;
 for (int i=0; i<strlen(str1); i++) {
  if (isalpha(str1[i])) {
   bukva=1;
  }
  else if (isdigit(str1[i])) {
   cifra=1;
  }
  else if (!isalnum(str1[i])) {
   specZnak=1;
  }
 }
 return bukva&&cifra&&specZnak;
}
int main() {
 char str[100];
 cin.getline(str,100);
 if (daliSlozena(str)) {
  cout<<"Strong password";
 }
else {
 cout<<"Its not strong";
}

}
