/*
Напиши програма која ќе го испечати зборот кој има најголем број различни букви.

Зборовите со помалку од четири букви не се земаат предвид при проверката.

Не се прави разлика помеѓу големи и мали букви (т.е. A и a се сметаат за исто).

Ако има повеќе зборови кои ги исполнуваат критериумите, се печати последниот од нив.


*/
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    const int MAX = 21; // збор не поголем од 20 букви + '\0'
    char word[MAX];
    char result[MAX];
    int maxUnique = 0;

    while (cin >> word) {
        // Игнорирај зборови помали од 4 букви
        int len = 0;
        while (word[len] != '\0') len++;
        if (len < 4) continue;

        // Проверка на уникатни букви
        bool letters[26] = {false};
        int uniqueCount = 0;
        for (int i = 0; i < len; i++) {
            char c = tolower(word[i]);
            if (c >= 'a' && c <= 'z') {
                int idx = c - 'a';
                if (!letters[idx]) {
                    letters[idx] = true;
                    uniqueCount++;
                }
            }
        }

        // Ако има повеќе уникатни букви, или исти но ова е последен во редот
        if (uniqueCount >= maxUnique) {
            maxUnique = uniqueCount;
            // Чување на зборот
            int j = 0;
            while (word[j] != '\0') {
                result[j] = word[j];
                j++;
            }
            result[j] = '\0';
        }
    }

    cout << result << endl;

    return 0;
}
