#include <iostream>
using namespace std;

class String{
public:
	void substring(char n[], char o[], int i, int e){
		int j, k;
		char c[100];
		for(j=i, k=0; j<=e; j++, k++){
			n[k] = o[j]; 
		}
		n[k] = '\0';
	}

	int length(char a[]){
		int i, n=0;
		for(int i=0; a[i]!='\0'; i++){
			n+=1;
		}
		return(n);
	}

	void copy(char t[], char f[]){
		int i;
		for(i=0; i<length(f); i++){
			t[i] = f[i];
		}
		t[i] = '\0';
	}

	void reverse(char t[], char f[]){
		int i;
		for(i=0; i<length(f); i++){
			t[i] = f[length(f)-i-1];
		}
		t[i] = '\0';
	}

	int equal(char n[], char o[]){
		int k=0, i;
		if(length(n)==length(o)){
			for(i=0; i<length(n); i++){
				k=1;
				if(n[i]!=o[i]){
					k=0;
					break;
				}
			}
		}
		return(k);
	}
};

int main(){
	String s1;
	char a[100], b[100], c[100], p[100];
	p[0] = '\0';
	cout<<"enter your word: ";
	cin>>a;
	for(int i=0; i<s1.length(a); i++){
      for(int j=i; j<s1.length(a); j++){
          s1.substring(b, a, i, j);
          s1.reverse(c, b);
          if(s1.equal(c, b) && s1.length(b)>s1.length(p)){
              s1.copy(p, b);
          }
      }
  }
	cout<<"longest palindrome is: "<<p;
}
