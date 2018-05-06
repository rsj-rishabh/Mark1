#include<iostream>
using namespace std;

int q[5], f=-1, r=-1;

void ins(){
	if(r==4){
		cout<<"overflow";
	}else{
		cout<<"enter data";
		int d;
		cin>>d;
		if(f=r==-1){
			f+=1;
			r+=1;
		}else{
			r+=1;
		}
			q[r]=d;
	}
}

void del(){
	if(f==-1){
		cout<<"underflow";
	}else{
		q[f]=0;
		if(f==r){
			f=r=-1;
		}else
			f+=1;
		cout<<"entry deleted";
	}
}

void display(){
	int i;
	for(i=f; i<=r; i++)
		cout<<q[i]<<"\t";
}

int main(){
	int c;
	while(c!=4){
	cout<<"1.insert\n2.delete\n3.display\n4.exit";
	cin>>c;
	
	switch(c){
		case 1: ins();
			break;
		case 2: del();
			break;
		case 3: display();
			break;
		case 4: "exit";
			break;
		default: cout<<"incorrect choice";
	}
	}
return 0;
}
