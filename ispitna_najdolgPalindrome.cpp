#include <iostream>
#include <string>
using namespace std;

// Проверка дали поднизата text[start..end] е палиндром
bool isPalindrome(string text, int start, int end) {
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
    string text;
    cout << "Vnesi tekst: ";
    getline(cin, text);

    int maxLen = 0;
    int startIndex = 0;

    int length = text.length();

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

    cout << "Najdolgiot palindrom e: " << text.substr(startIndex, maxLen) << endl;

    return 0;
}
