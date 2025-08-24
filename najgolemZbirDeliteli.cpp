//Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир
//на делителите е најголем. Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.
#include<iostream>
using namespace std;
int zbirDeliteli(int n) {
    int sum=0;
    for (int i=1;i<=n/2;i++) {
        //збир на делители не смееш од 0 да почнеш
        if (n%i==0) {
            sum+=i;
        }
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    int max=0;
    int maxBr=0;

for (int i=n-1;i>=1;i--) {
    int zbir=zbirDeliteli(i);
    if (zbir>max) {
        max=zbir;
        maxBr=i;

    }
}
    cout<<maxBr;
}
