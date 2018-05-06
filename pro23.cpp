#include <iostream>
#include <cstddef>
using namespace std;

struct node{
	int info;
	node *l;
	node *r;
};

struct node *root = NULL;
//struct node *p = NULL;
//struct node *pr = NULL;
int count = 0;

void tree_ins(){
	node *n;
	n = new node;
	n->l = NULL;
	n->r = NULL;
	cout<<"\nEnter data: ";
	int data;
	cin>>data;
	n->info = data;
	if(count==0){
		root = n;
	} else{
		node *p;
		node *pr;
		p = root;
		while(p!=NULL){
			if(p->info <= data){
				pr = p;
				p = p->r;
			}
			if(p->info > data){
				pr = p;
				p = p->l;
			}
		}
		if(pr->info <= data){
				pr->r = n;
		}
		if(pr->info > data){
				pr->l = n;
		}
		count+=1;
	}
}

void step(node *pt, int t, node *st[]){
	pt=st[t];
	t-=1;
	int data;
	while(pt!=NULL){
		data = pt->info;
		cout<<data;
		if((pt->r) != NULL){
			pt=pt->r;
			step(pt, t, st);
		}
		pt=st[t];
		t-=1;
	}
}

void tree_dis(){
	node *s[count];
	int top=0;
	s[top] = NULL;
	node *p;
	p = root;
	while(p!=NULL){
		top+=1;
		s[top]=p;
		p=p->l;
	}
	step(p, top, s);
}

int main(){
	int c=1;
	while(c!=0){
		switch(c){
			case 1:
				tree_ins();
				break;
			case 2:
				tree_dis();
				break;
			default: cout<<"Wrong input!";
		}
		cin>>c;
	}
	return 0;
}
