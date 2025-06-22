#include<iostream>
using namespace std;
void zameniMinSoNula(int a[],int n){
	int min=a[0];//prviot element pretpostavuvame deka e najmal
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	
	for(int i=0;i<n;i++){
		if(a[i]==min){
			a[i]=0;
		}
	}}
	
	

int main(){
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
		zameniMinSoNula(a,n);	
			for(int i=0;i<n;i++){
	cout<<a[i];
}
	
	
	
}
