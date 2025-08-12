/*

Од стандардниот влез се читаат повеќе редови (ниеден ред не е подолг од 100 знаци).
Да се најде и отпечати редот во кој односот (број на цифри / број на букви) е најголем. Ако има повеќе такви редови, се печати последниот од нив.
Ако редот нема букви, тој ред се игнорира.

*/
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char line[101];
    char maxLine[101];
    double maxRatio = -1.0;

    while (cin.getline(line, 101)) {
        int digitsCount = 0;
        int lettersCount = 0;

        int len = strlen(line);
        for (int i = 0; i < len; i++) {
            if (isdigit(line[i])) {
                digitsCount++;
            } else if (isalpha(line[i])) {
                lettersCount++;
            }
        }

        if (lettersCount == 0) {
            // Игнорирај ако нема букви
            continue;
        }

        double ratio = (double)digitsCount / lettersCount;

        if (ratio >= maxRatio) {
            maxRatio = ratio;
            strcpy(maxLine, line);
        }
    }

    cout << maxLine << endl;

    return 0;
}
