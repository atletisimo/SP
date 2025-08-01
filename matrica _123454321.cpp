/*
Да се напише програма која за внесен природен број n (1 ≤ n ≤ 50), ќе испечати симетричен бројчано-опаѓачки образец (пирамида) составен од две половини:

Првата половина на секој ред се бројки растечки од 1 до n - i,

Втората половина се бројки опаѓачки од n - i - 1 до 1.

Влез:5

Излез:
123454321
1234321
12321
121
1
i	limit = n - i	Растечки	Опаѓачки	Вкупно
0	5	           1 2 3 4 5	4 3 2 1	123454321
1	 4	         1 2 3 4	3 2 1	1234321
2	             3 1 2 3	2 1	12321
3              	2	1 2	1	121
4	          1	1	-	1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {//do 5,ovoj ciklus go kontrolira brojot na redovi ,znaci ke se izvrsi tocno n pati za sekoj red,znaci kontrolira broj na red
        int limit = n - i; //limit 5-1=4 broj na index,do taa pozicija

        // растечки дел
        for (int j = 1; j <= limit; j++) {//od 1 do 5
            cout << j;
        }

        // опаѓачки дел
        for (int j = limit - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}


