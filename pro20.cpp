#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
	char name[4] = "abc";
	//null character automatically appended
	//space not accepted
	cout<<name<<endl;
	
	char name2[] = {'a', 'b', 'c', ' ', 'd'};
	cout<<name2<<endl;
	
	char name1[] = "hello world";
	//space accepted
	//null character automatically appended
	cout<<name1<<endl;
	
	char name3[20];
	//space accepted
	//null character automatically appended
	gets(name3);
	puts(name3);
	
	char name4[10];
	//space accepted
	//null character automatically appended
	cin.get(name4, 5);
	cout<<name4<<endl;
	
	char name5[100];
	cin.getline(name5, 100, 'a');
	cout<<name5<<endl;
	
	cout<<strcmp(name1, name5)<<endl;
	
	strcat(name1, name5);
	cout<<name1<<endl<<name5<<endl;
	
	cout<<strlen(name1)<<endl<<strlen(name5)<<endl;
	
	strcpy(name1, name5);
	cout<<name1<<endl<<name5<<endl;
return 0;
}
