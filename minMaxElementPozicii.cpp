#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	int min=9999;
	int max=-9999;

	int minIndex = 0, maxIndex = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<min){
			min=a[i];
			   minIndex = i;
		}
		if(a[i]>max){
			max=a[i];
			maxIndex=i;
		}
		
	}



	cout<<"Min: "<<min<<" na pozicija: "<<minIndex;
	cout<<"\n";
	cout<<"Max: "<<max<<" na pozicija: "<<maxIndex;;
	cout<<"\n";

}
