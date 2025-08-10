/*Од стандарден влез прво се читаат два знака z1,z2,а потоа се читаат редови со низи од знаци се’ додека не се прочита знакот
 # (секој од редовите не е подолг од 80 знаци).
Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред составени од знаците што се наоѓаат
меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.
Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2,
а меѓу z1 и z2 секогаш има барем еден знак.
 */
#include<iostream>
#include<cstring>

using namespace std;
int main() {
 char z1;
 char z2;
 char str[100];
 cin >> z1 >> z2;
 cin.ignore();
 while (true) {
  int first=-1;
  int last=-1;
  cin.getline(str, 100);
  if (strcmp(str,"#")==0) {
   break;
  }
  for (int i = 0; i < strlen(str); i++) {
   if (str[i]==z1) {
    first=i;
   }
   if (str[i]==z2&&first!=-1) {
    last=i;
     break;
   }
  }

  // ако се најдени позиции и има знаци помеѓу
  if (first != -1 && last != -1 && last > first + 1) {
   for (int i = first + 1; i < last; i++) {
    cout << str[i];
   }
   cout << endl;
  }
 }


/*

#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char z1;
    char z2;
    char str[100];
    cin>>z1>>z2;
    cin.ignore();
    while (true) {
        cin.getline(str,100);
        if (strcmp(str,"#")==0) {
            break;
        }


        int startPos=-1;
        int endPos=-1;

        for (int i=0; i<strlen(str); i++) {
            if (str[i]==z1) {
                startPos=i;
            }
        }
        for (int i=0; i<strlen(str); i++) {
            if (str[i]==z2) {
                endPos=i;
            }
        }

        for (int i=startPos+1; i<endPos; i++) {
            cout<<str[i];

        }
        cout<<endl;

    }
}







 */

 


}

