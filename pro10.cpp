#include <iostream>
using namespace std;

int main(){
	char s[100];
	int i, n=0, k=0;
	cout<<"enter word\n";
	cin>>s;
	for(i=0; s[i]!='\0'; i++){
		n+=1;
	}
	for(i=0; i<=n/2; i++){
		if(s[i]!=s[n-i-1]){
			k=1;
			break;
		}
	}
	if(k==0)
		cout<<"it is palindrome";
	else if(k==1)
		cout<<"it is not palindrome";
	return 0;
}
