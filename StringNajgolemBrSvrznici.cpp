/*
*Од стандарден влез се внесуваат непознат број на реченици претставени преку текстуални низи (стрингови)
секоја не подолга од 100 знаци и секоја во нов ред. Програмата треба да го најде стрингот кој содржи најмногу сврзници
и да го испечати заедно со бројот на најдените сврзници. За сврзници се сметаат сите зборови составени од една,
две или три букви. Зборовите во текстуалната низа се одделени со едно или повеќе прзани места и/или интерпункциски знак.
Броењето на сврзници во дадена текстуална низа треба да се реализира во посебна функција.
Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.
Ако има повеќе реченици со ист максимален број на сврзници, се печати прво најдената.
Објаснување на тест примерот:
Бројот на сврзници по реченици е 2, 3, 4, 2, 4 и 7 соодветно. Најмногу сврзници има по последната реченица
па се печати бројот 7 и содржината на таа реченица.
 */
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Функција што брои сврзници (зборови со 1 до 3 букви)
int brSvrznici(char *str) {
    int count = 0;//broj na svrznici
    int len = 0;//dolzina na tekovniot zbor sto go gradime
    char zbor[101];//niza vo koja ke go sostavime tekovniot zbor

    for (int i = 0; ; i++) {//ovoj ciklus nema uslov ,znaci e beskonecen
        char c = str[i];

        if (isalpha(c)) {//ako e bukva
            zbor[len++] = c;//go dodavame vo zbor i ja zgolemuvame dolzinata na zborot koj sto go gradime
            //стави го знакот c на позиција len во низата zbor.
            //зголеми ја променливата len по оваа наредба.
            //ako ne e bukva
        } else {
            if (len > 0) {//Ако len > 0, тоа значи дека има собран збор (на пример, "и", "на", "ова").
                zbor[len] = '\0';
                if (len >= 1 && len <= 3) {
                    count++;
                }
                len = 0; // ресетирај за следен збор
            }

            if (c == '\0') break;
        }
    }

    return count;
}

int main() {
    char recenica[101];
    char maxRecenica[101];
    int maxSvrznici = 0;

    while (cin.getline(recenica, 101)) {
        int broj = brSvrznici(recenica);
        if (broj > maxSvrznici) {
            maxSvrznici = broj;
            strcpy(maxRecenica, recenica);  // зачувување на најдобрата
        }
    }

    cout << maxSvrznici << endl;
    cout << maxRecenica << endl;

    return 0;
}
