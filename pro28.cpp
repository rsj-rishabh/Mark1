#include <iostream>
using namespace std;

long long ackermann(long long m,long long n){
	if(m==0){
		return n+1;
	} else if(m>0 && n==0){
		return ackermann(m-1, 1);
	} else if(m>0 && n>0){
		return ackermann(m-1, ackermann(m, n-1));
	}
}

int main(){
		long long i, j;
		cout<<"Enter two arguements of Ackermann Function:\n";
		cin>>i>>j;
		cout<<ackermann(i,j);
}
