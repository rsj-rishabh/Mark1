#include<iostream>
using namespace std;

int top=-1;
int a[10];

void push(int x){
	if(top<10){
	top+=1;
	a[top]=x;}else cout<<"array full";
}

void pop(){
	if(top>-1){
	top-=1;} else cout<<"array empty";
}

void display(){
	int i;
	for(i=0; i<=top; i++)
		cout<<a[i]<<"\t";
}

int main(){
	int c;
	while(c!=4){
	cout<<"1.push\n2.pop\n3.display\n4.exit";
	cin>>c;
	
	switch(c){
		case 1: cout<<"enter data";
			int d;
			cin>>d;
			push(d);
			break;
		case 2: pop();
			break;
		case 3: display();
			break;
		case 4: "exit";
			break;
		default: cout<<"incorrect choice";
	}}
return 0;
}
