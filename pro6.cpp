#include <iostream>
#include <cstddef>
using std::cin;
using std::cout;
using namespace std;

struct node{
	int info;
	node *link;
};

struct node *top = NULL;
int count = 0;

void push(){
	node *n;
	int data;
	n = new node;
	n->link = top;
	cout<<"enter data";
	cin>>data;
	n->info = data;
	top = n;
	count += 1;
}

void pop(){
	if(top==NULL){
		cout<<"stack is empty";
	}else{
		node *temp;
		temp = top;
		top = top->link;
		cout<<"entry deleted";
		delete temp;
		count -= 1;
	}
}

void display(){
	int i = 0;
	node *next;
	int data = top->info;
	cout<<data<<"\t";
	next = top->link;
	while(i<count-1){
		data = next->info;
		cout<<data<<"\t";
		next = next->link;
		i++;
	}
}

int main(){
	int c = 0;
	while(c!=4){
		cout<<"\nEnter choice:\n1.push\n2.pop\n3.display\n4.exit";
		cin>>c;
		switch(c){
			case 1: push();
				break;
			case 2: pop();
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
