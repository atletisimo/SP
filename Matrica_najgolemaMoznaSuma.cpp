#include <iostream>
using namespace std;

int main() {
    int n = 3, m = 4;
    int a[3][4] = {
        {1,  2, -1,  4},
        {-2, 3,  4, -1},
        {5, -3,  2,  2}
    };

    int maxSum = INT_MIN;  // Најголема сума досега
    // Почнуваме да ги земаме сите можни подматрици по редови
    for(int top = 0; top < n; top++) {
        int temp[100] = {0};  // ⚠️ Одново го ресетираме temp на 0 при секој top
        // Ова е клучно за правилно собирање на колони подред по подред

        for(int bottom = top; bottom < n; bottom++) {
            // Собирај по колони вредности од редовите топ..bottom во temp
            for(int j = 0; j < m; j++) {
                temp[j] += a[bottom][j];
            }

            // Сега во temp имаме збир по колони за редови од top до bottom
            // Следно, го наоѓаме најголемиот континуиран подниз во temp (Kadane)
            int currSum = 0;
            int bestSum = INT_MIN;
            for(int j = 0; j < m; j++) {
                currSum += temp[j];
                if(currSum > bestSum) bestSum = currSum;
                if(currSum < 0) currSum = 0;  // Ако е негативен, ресетирај

                // 🌟 На пример currSum е тековна сума во подниз
                // Ако станала лоша (негативна), ја почнуваме од почеток
            }

            // Споредбата со maxSum
            if(bestSum > maxSum) maxSum = bestSum;
        }
    }

    cout << "Најголема сума на подматрица е: " << maxSum << endl;

    return 0;
}
