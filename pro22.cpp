#include <iostream>
using namespace std;

int main(){
  int x, c, i, j;
  cout<<"Enter no. of rows: ";
  cin>>x;
  for(int i=0; i<=x; i++){
    c=1;
    for(int j=0; j<x-i; j++){
      cout<<" ";
    }
    for(int j=0; j<=i; j++){
      cout<<c<<" ";
      c = c * (i-j)/(j+1);
    }
      cout<<endl;
  }  
  return 0;
}
