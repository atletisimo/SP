#include<iostream>
using namespace std;
int countDigit(int num,int digit){//num e celiot broj pr:545,a digit e cifrata sto ja barame pr:5 bidejki taa e poslednata %10
int count=0;
while(num>0){//545
int last=num%10;//5
if(last==digit){//last sekoja posledna cifra edna po edna za sekoj broj ,znaci prvin last=5,i tuka count++ 
//potoa otkako ke se otstrani so num/=10,last ke bide 4 i tie ne se isti so toa sto ja barame t.e digit i nema counterot da se zgolemi
count++;}
num/=10;
}
return count;

}
int main(){
	int n;
	int a[50];
	cin>>n;
	for(int i=0;i<n;i++)//5
	{
	cin>>a[i];	// 55 435 545 645  33232432
	}

	for(int i=0;i<n;i++){
int lastDigit=a[i]%10;
int count=countDigit(a[i],lastDigit);
a[i]=count;
}
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
		
		
		
		
	}
	
	
