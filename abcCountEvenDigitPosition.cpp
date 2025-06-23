#include<iostream>
using namespace std;

// f-ja kojasto broi kolku pati se pojavuva digit na parni pozicii vo num
int countEvenPositions(int num, int digit) {//digit e cifrata sto ja barame
    int pos = 1; // poziciite se brojat od desno kon levo
    int count = 0;
    while (num > 0) {
        int last = num % 10;
        if (pos % 2 == 0 && last == digit) {
            count++;
        }
        num /= 10;
        pos++;
    }
    return count;
}

int main() {
    int a, b, c;
    //se cita se dodeka ne se vnese nesto sto ne e broj(t.e integer)
    while (cin >> a >> b >> c) {
        int countA = countEvenPositions(a, c);//func call
        int countB = countEvenPositions(b, c);//func call

        if (countA >= countB) {//ako broj na pojavuvanja na a e pogolem
            cout << a << endl;//go pecati a 
        } else {
            cout << b << endl;//vo drug slucaj b
        }
    }

    return 0;
}
