#include <iostream>
using namespace std;

//I applied the concept of structure! However I don't know if it is efficient or not.
struct x{
	int a, b;
};

struct x func(int l, int m){
	struct x *j;
	j = new x;
	j->a = l+m;
	j->b = l-m;
	return (*j);
}

int main(){
	cout<<"enter 2 values: ";
	int p,q;
	cin>>p>>q;
	x *k = new x;
	*k = func(p,q);
	cout<<"sum="<<(k->a)<<endl;
	cout<<"diff="<<(k->b);
return 0;
}
