/*  n=4
++++
+++
++
+
for (int i = n; i > 0; i--) {
    for (int j = 0; j < i; j++) {
        cout << "+";
    }
    cout << "\n";
}
Прво: надворешна петља
i оди од n до 1 → i = 4, 3, 2, 1

Значи, ќе имаме 4 реда.

Второ: внатрешна петља
За секој i, j оди од 0 до i - 1 → точно i плусови.

i	Внатрешна петља (j < i)	Излез
4	j = 0,1,2,3 → 4 +	++++
3	j = 0,1,2 → 3 +	+++
2	j = 0,1 → 2 +	++
1	j = 0 → 1 +	+

Ако го ставиме j = n, би морале:

for (int j = n; j > n - i; j--) 




  */



#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			
			
		cout<<"+";
			}
				
		cout<<"\n";
		}
	
	}
