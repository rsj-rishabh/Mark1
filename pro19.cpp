#include <iostream>
using namespace std;

int main(){
	int c = 1, a;
	char ch;
	while(c!=3){
		cout<<"enter a choice:\n1. char to ASCII\n2. ASCII to char\n3. exit\n";
		cin>>c;
		switch(c){
			case 1:
				cout<<"enter a character:  ";
				cin>>ch;
				a = (int) ch;
				cout<<endl;
				cout<<"ASCII value is:  "<<a<<endl;
				break;
			case 2:
				cout<<"enter ASCII value:  ";
				cin>>a;
				ch = (char) a;
				cout<<endl;
				cout<<"character is:  "<<ch<<endl;
				break;
			case 3:
				break;
			default:
				cout<<"invalid input";
		}
	}
}
