/*
n=5
*
**
* *
*  *
*****



*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==0||(j==i)&&(i==j)||i==n-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
