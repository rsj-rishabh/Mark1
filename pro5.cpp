#include <iostream>
#include <cstddef>
using namespace std;

//creating a node of linked list using structure
struct node{
	int info;
	node *link;
};

struct node *start = NULL;    //creating a pointer of 'node' type
int count = 0;

void insb(){	//insertion at beginning
	node *n;
	n = new node;    //assigning a memory location of required size to the 'node' type pointer 'n';
	n->link = start;     //'->' is used to access a member of the structure
	start = n;
	cout<<"enter data:\t";
	int data;
	cin>>data;
	n->info = data;
	count+=1;
}

void insp(){	//insertion at a position
	cout<<"enter position:\t";
	int p;
	cin>>p;
	if(p<=count){
		if (p==0){
			insb();
		}
		if (p>0){
			int i=0;
			node *next;
			next = start;
			while(i!=p-1){
				next = next->link;
				i++;
			}
			node *n;
			n = new node;
			n->link = next->link;
			next->link = n;
			int data;
			cout<<"enter data:\t";
			cin>>data;
			n->info = data;
			count+=1;
		}
		if (p<0){
			cout<<"specified position does not exist!";
		}
	} else{
		cout<<"specified position does not exist!";
	}
}

void inse(){	//insertion at the end
	if(count>0){
		int i=0;
		node *next;
		next = start;
		while(i!=count-1){
			next = next->link;
			i++;
		}
		node *n;
		n = new node;
		n->link = next->link;
		next->link = n;
		int data;
		cout<<"enter data:\t";
		cin>>data;
		n->info = data;
		count+=1;
	} else
		insb();
}

void delb(){	//deletion at beginning
	if(count>0){
		node *temp;
		temp = start;
		start = start->link;
		delete temp;     //'delete' keyword is used to clear the memory allocated to a node
		count-=1;
		cout<<"\nentry deleted";
	} else
		cout<<"\nlist is empty";
}

void delp(){	//deletion at a position
	if(count>0){
		cout<<"enter position:\t";
		int p;
		cin>>p;
		if(p<count){
			if (p==0){
				delb();
			}
			if (p>0){
				int i=0;
				node *next;
				next = start;
				while(i!=p-1){
					next = next->link;
					i++;
				}
				node *temp;
				temp = next->link;
				next->link = temp->link;
				delete temp;
				count-=1;
				cout<<"\nentry deleted";
			}
			if (p<0){
				cout<<"specified position does not exist!";
			}
		} else{	
			cout<<"specified position does not exist!";
		}
	} else
		cout<<"\nlist is empty";
}

void dele(){	//deletion at the end
	if(count>0){
		if(count>1){
			int i=0;
			node *next;
			next = start;
			while(i!=count-1){
				next = next->link;
				i++;
			}
			node *temp;
			temp = next->link;
			next->link = NULL;
			delete temp;
			count-=1;
			cout<<"\nentry deleted";
		} else
			delb();
	} else
		cout<<"\nlist is empty";
}

void display(){
	if(count>0){
		int i = 0;
		node *next;
		int data = start->info;
		cout<<data<<"\t";
		next = start->link;
		while(i<count-1){
			data = next->info;
			cout<<data<<"\t";
			next = next->link;
			i++;
		}
	}else
		cout<<"\nempty list";
}

int main(){
	int c = 0;
	while(c!=8){
		cout<<"\nEnter choice:\n1.insert at beginning\n2.insert at a position\n3.insert at the end\n4.delete at beginning\n5.delete at a position\n6.delete at end\n7.display\n8.exit";
		cin>>c;
		switch(c){
			case 1: insb();
				break;
			case 2: insp();
				break;
			case 3: inse();
				break;
			case 4: delb();
				break;
			case 5: delp();
				break;
			case 6: dele();
				break;
			case 7: display();
				break;
			case 8: "exit";
				break;
			default: cout<<"incorrect choice";
		}
	}
return 0;	
}
