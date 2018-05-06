#include<iostream>
using namespace std;

int main(){
	int i, j;
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
	//bubble sort logic
	for(i=0; i<10-1; i++){
		for(j=0; j<10; j++){
			if(a[j+1]<a[j]){
				int t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0; i<10; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
return 0;
}
