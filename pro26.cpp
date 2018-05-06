#include <iostream>
using namespace std;

int main(){
	long long int a[10];
	int i;
	for(i=0; i<10; i++){
		a[i]=i*(1000000000000000000);
	}
	int c=1;
	while(c!=0){
		for(i=0; i<10; i++){
		cout<<a[i]<<endl;
		}
	cin>>c;
	}
return 0;
}
