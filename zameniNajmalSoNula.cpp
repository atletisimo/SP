#include<iostream>
using namespace std;
int main(){
	int n;
	int a[100];
	
	cin>>n;
	int min=9999;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		
		if(a[i]<min){
			min=a[i];
		}
	
}
for(int i=0;i<n;i++){
	if(a[i]==min){
		a[i]=0;
	}
}
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
	
}
