#include <iostream>
#include <cstring>
using namespace std;

// Функција што проверува дали поднизата text[start..end] е палиндром
bool isPalindrome(char text[], int start, int end) {
    while(start < end) {
        if(text[start] != text[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char text[1000];
    cout << "Vnesi tekst: ";
    cin.getline(text, 1000);

    int maxLen = 0;
    int startIndex = 0;
    int length = strlen(text);

    for(int i = 0; i < length; i++) {
        for(int j = i; j < length; j++) {
            if(isPalindrome(text, i, j)) {
                int currLen = j - i + 1;
                if(currLen > maxLen) {
                    maxLen = currLen;
                    startIndex = i;
                }
            }
        }
    }

    cout << "Najdolgiot palindrom e: ";
    for(int i = startIndex; i < startIndex + maxLen; i++) {
        cout << text[i];
    }
    cout << endl;

    return 0;
}
