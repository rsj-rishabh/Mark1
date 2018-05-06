#include <iostream>
using namespace std;

void trv(int s[], int i, int n){
	if(i==n){

	}else{
		cout<<s[i]<<"\t";
		trv(s,i+1, n);
	}
}

int main(){
	int n[3]={1,2,3};
	trv(n, 0, 3);
}
