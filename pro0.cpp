#include <iostream>
using namespace std;

int main(){
	int a=10;
	int *p;
	p = &a;
	//pre increment on variable 'a'
	cout<<++a<<endl;
	//post increment on variable 'a'
	cout<<a++<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;

	/* below line pre increments the value at address of 'a' or say the value which pointer 'p' points at! 
	  it is same as ++(*p)*/
	  cout<<++*p<<endl<<p<<endl;
	  
	  cout<<*p<<endl;

	/* below line is actually post incrementing the address of 'a' i.e., value of 'p'
	  it is same as *(p++). Yes, *(++p) is also a valid statement and will give the value which 'p' will
	  point at, after its increment.

	  since it is post increment, below line will give same output as that of cout<<*p; */
	cout<<*p++<<endl;

	/* also notice that, now the value of 'p' is changed. Therefore, 'p' no longer points to 'a' but 
	  some other memory space!
	  to post increment the value which 'p' points at, we should write the code as below */
	cout<<(*p)++;

	cout<<endl<<p<<endl<<*p<<endl<<a;
	//observe in the output the previous and current value of 'p' and '*p'
	
	return 0;
}
