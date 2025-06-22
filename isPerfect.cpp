#include<iostream>
using namespace std;
bool isPerfect(int n){
	int sum=0;
	int original=n;
	for(int i=1;i<n;i++){
	if(n%i==0){
	
	sum+=i;

	}}
	if(sum==original){
		return true;
	}
return	false;
	
}
int main(){
	int n;
	cin>>n;
	cout<<isPerfect(n);
}
