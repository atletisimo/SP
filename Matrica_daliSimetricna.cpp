#include<iostream>
using namespace std;
int main(){
	int n;
	int a[100][100];
	bool isSimetricna=true;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=a[j][i]){
				isSimetricna=false;
				break;
			}
		
			}
		}
			if(isSimetricna){
				cout<<"Matricata e simetricna";
			}
			else{
				cout<<"Matricata ne e simetricna";
	}
	
	
	
}
