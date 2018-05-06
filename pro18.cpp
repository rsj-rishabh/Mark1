#include<iostream>
using namespace std;

int main(){
	int i, j, s;
	int a[10];
	cout<<"enter elements in array:\n";
	for(i=0; i<10; i++){
		cin>>a[i];
	}
	cout<<"your array is:\n";
	for(i=0; i<10; i++){
		cout<<a[i]<<"\t";
	}
	cout<<"\nafter sorting:\n";
	for(i=1; i<10; i++){
		s=a[i];
		for(j=i; s<=a[j]; j--){
		        a[j]=a[j-1]; 
		}
		a[j+1]=s;
	}
	for(i=0; i<10; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
return 0;
}
