#include<iostream>
using namespace std;

int q[5], r=-1, f=-1;

void ins(){
	if((f==0 && r==4) || f==r+1){
		cout<<"overflow";
	}else{
		if(f==-1){
			f=r=0;
		}else if(r==4){
			r=0;
		}else{
			r+=1;
		}
		int d;
		cout<<"enter data";
		cin>>d;
		q[r]=d;
	}
}

void del(){
	if(f==-1){
		cout<<"underflow";
	}else{
		if(f==r)
			f=r=-1;
		else if(f==4)
			f=0;
		else
			f+=1;
		cout<<"entry deleted";
	}
}

void display(){
	if(r>=f){
		int i;
		for(i=f; i<=r; i++)
			cout<<q[i]<<"\t";
	}else{
		int i;
		for(i=0; i<=r; i++)
			cout<<q[i]<<"\t";
		for(i=f; i<=4; i++)
			cout<<q[i]<<"\t";
	}
}

int main(){
	int c;
	while(c!=4){
	cout<<"\nenter choice\n1.insert\n2.delete\n3.display\n4.exit";
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

