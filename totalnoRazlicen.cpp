/*
Од стандарден влез се внесуваат два цели броја N и Х.

Да се најде најблискот број помал од N коj е тотално различен од бројот Х.

Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
88 7 =>86

Задачата да се реши без употреба на низи и матрици.*/
#include<iostream>
using namespace std;

bool daliRazlicni(int a, int b) {
    while(a > 0) {
        int cifraA = a % 10;
        int tempB = b;
        while(tempB > 0) {
            int cifraB = tempB % 10;
            if(cifraA == cifraB) return false; // има иста цифра
            tempB /= 10;
        }
        a /= 10;
    }
    return true; // нема иста цифра
}

int main() {
    int n, x;
    cin >> n >> x;

    for(int i=n-1; i>=0; i--) {
        if(daliRazlicni(i, x)) {
            cout << i;
            break; // најдовме најблизок помал број → завршуваме
        }
    }
}
