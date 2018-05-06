#include <iostream>
using namespace std;

int main(){
	cout<<"enter no.\n";
	int n;
	cin>>n;
	n=n%9;
	if(n==0)
		n=9;
	cout<<"\n"<<n;
	return 0;
}
