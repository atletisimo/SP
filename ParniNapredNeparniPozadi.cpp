#include<iostream>
using namespace std;
void sortiranje(int a[],int size){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
}
int brisiDuplikati(int niza[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;){
			if(niza[i]==niza[j]){
				//pomesti gi elementite na levo
				for(int k=j;k<n-1;k++){
				niza[k]=niza[k+1];	
				}
				n--;
			}else{
				j++;
			}
		
	}
}
return n;
}
int main(){
	int n;
	cin>>n;
	int num;
	int parni[100];
	int neparni[100];
	int p=0;
	int np=0;
	for(int i=0;i<n;i++){
		cin>>num;
	


	if(num%2==0){
parni[p++]=num;
	}
	else{
neparni[np++]=num;
	}
}
p = brisiDuplikati(parni, p);
np = brisiDuplikati(neparni, np);

sortiranje(parni,p);
sortiranje(neparni,np);

for(int i=0;i<p;i++){
	cout<<parni[i]<<" ";
	
}
for(int i=0;i<np;i++){
	cout<<neparni[i]<<" ";
	
}	
}
	
	
