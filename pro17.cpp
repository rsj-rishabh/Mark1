#include<iostream>
using namespace std;

int main(){
	int i, j, min, loc;
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
	//selection sort logic
	for(i=0; i<10-1; i++){
		min=a[i];
		loc=i;
		for(j=i; j<10; j++){
			if(a[j]<min){
				min=a[j];
				loc=j;
			}
		}
		int t;
		t=a[i];
		a[i]=min;
		a[loc]=t;
	}
	for(i=0; i<10; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
return 0;
}
