#include <iostream>
using namespace std;

void toh(int n,int l,int m,int r){
	if(n==1){
		cout<<l<<"  to  "<<r<<endl;
	}else{
		toh(n-1,l,r,m);
		cout<<l<<"  to  "<<r<<endl;
		toh(n-1,m,l,r);
	}
}

int main(){
	int a;
	cout<<"enter no. of disks:\t";
	cin>>a;
	toh(a,1,2,3);
return 0;
}
