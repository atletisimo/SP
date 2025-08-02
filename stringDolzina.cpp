/*
 *Да се напише ф-ја што ќе ја одредува должината на една текстуална низа
 */
#include<iostream>
#include<cstring>
using namespace std;
int odrediDolzina(char *str) {
    int dolzina=0;
    // for (int i=0; i<strlen(str); i++) {
    //    dolzina++;//ова не е ефикасно бидејќи има временска сложеност O(n^2)
    while (str[dolzina]!='\0') { //O(N)
        dolzina++;
    }


    return dolzina;

}
int main() {
    char str[100];
    cin.getline(str,100);
   int len= odrediDolzina(str);
    cout<<len<<endl;


}
