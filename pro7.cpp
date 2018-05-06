#include <iostream>
#include <cstddef>
using namespace std;

struct node{
	int info;
	node *link;
};

struct node *front = NULL;
struct node *rear = NULL;
int count = 0;

void ins(){
	node *n;
	int data;
	n = new node;
	cout<<"enter data:\n";
	cin>>data;
	n->info = data;
	if(count==0){
		front = n;
		rear = n;
	} else {
		rear->link = n;
		rear = n;
	}
	count+=1;
}

void del(){
	node *temp;
	temp = front;
	if(count==0){
		cout<<"queue is empty!\n";
	} else if(front==rear){
		front = NULL;
		rear = NULL;
		cout<<"entry deleted\n";
		delete temp;
		count-=1;
	}else{
		front = front->link;
		cout<<"entry deleted\n";
		delete temp;
		count-=1;
	}
}

void display(){
	if(count!=0){
	int i = 0;
	node *next;
	
	cout<<"\nin ascending order\n";
	int datal, datar;
	node *cur;
	i=0;
	while(i<count-1){
		int j;
		cur = front;
		for(j=0; j<count-1; j++){
			next = cur->link;
			datal = cur->info;
			datar = next->info;
			if(datal>datar){
				int t;
				t=datal;
				datal=datar;
				datar=t;
				cur->info = datal;
				next->info = datar;
			}
			cur = cur->link;
		}
		i++;
	}
	
	i=0;
	int data = front->info;
	cout<<data<<"\t";
	next = front->link;
	while(i<count-1){
		data = next->info;
		cout<<data<<"\t";
		next = next->link;
		i++;
	}} else
		cout<<"no data in queue!";
}

int main(){
	int c = 0;
	while(c!=4){
		cout<<"\nEnter choice:\n1.insert\n2.delete\n3.display\n4.exit";
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
