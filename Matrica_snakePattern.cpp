#include <iostream>
using namespace std;

int main() {
    int n;
    int matrica[100][100];
    cin >> n;
    int brojac = 1;

    // Пополнување
    for (int i = 0; i < n; i++) {//sega sme kaj redicata
        if (i % 2 == 0) {//ako redicata e parna
            // Лево кон десно
            for (int j = 0; j < n; j++) {//za sekoj element t.e sekoja kolona vo redicata  j ako e parna  pecati od 0 pa do n znaci ako n =4 ke pecati do n znaci bez nego 
                matrica[i][j] = brojac;//brojacot go stavame na sekoja pozicija od matricata se do n
                brojac++;//i go zglemuvame
            }
        } else {//vo drug slucaj ako e neparna znaci
            // Десно кон лево
            for (int j = n - 1; j >= 0; j--) {
                matrica[i][j] = brojac;//popolnuvame obratno
                brojac++;
            }
        }
    }
//ova e del za pecatenje
    // Печатење
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrica[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
