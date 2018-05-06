// swapping two no.(s) using XOR operations

#include <iostream>
using namespace std;

void swap(int *x, int *y){
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

int main(){
	int a = 2;
	int b = 3;
	int *l;
	l = &a;
	int *m;
	m = &b;
	cout<<*l<<endl<<*m;
	swap(*l, *m);
	cout<<*l<<endl<<*m;
	return 0;
}
