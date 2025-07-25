/*
Подниза = дел од низата со последователни елементи.
Растечка = секој следен број е поголем од претходниот.
n = 10  
a = 1 2 3 2 4 5 6 1 2 3
Најдолгата растечка подниза е:
2 4 5 6 → должина = 4
или 1 2 3 на крај, исто 3, но не е подолга.

currLen: моментална должина на тековна растечка подниза

maxLen: најдолга растечка подниза досега

start: индекс каде започнува моменталната растечка подниза

bestStart: индекс од каде започнува најдолгата растечка подниза



  */




#include<iostream>
using namespace std;

int main() {
	int a[100], n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int maxLen = 1, currLen = 1, start = 0, bestStart = 0;

	for(int i = 1; i < n; i++) {//Почнува од вториот елемент (i=1), 
		if(a[i] > a[i - 1]) {//затоа што го споредува со претходниот (i-1).
			currLen++;//Ако тековниот елемент a[i] е поголем од претходниот, тогаш продолжува растечката низа → зголеми ја должината.
		} else {
			if(currLen > maxLen) {
				maxLen = currLen;
				bestStart = start;
			}



			currLen = 1;      //од каде (кој индекс) започнува моменталната растечка подниза.
			start = i;//Бидејќи старата подниза завршила, и нова почнува од a[i], тогаш стартниот индекс на новата подниза е i.
		}
	}


	if(currLen > maxLen) {
		maxLen = currLen;
		bestStart = start;
	}

	cout << "Najdolga rastecka podniza e: ";
	for(int i = bestStart; i < bestStart + maxLen; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
