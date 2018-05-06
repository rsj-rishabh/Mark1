#include <iostream>
using namespace std;

int beg, end, top=-1, a[10], loc;

int main(){
	int c=1;
	while(c!=0){
	int i, j;
	int left, right;
	cout<<"enter elements in array:\n";
	for(i=0; i<10; i++){
		cin>>a[i];
	}
	cout<<"your array is:\n";
	for(i=0; i<10; i++){
		cout<<a[i]<<"\t";
	}
	cout<<"\nafter sorting:\n";

	///sorting by quick sort technique
	int upper[10], lower[10];
	top+=1;
	lower[top]=0, upper[top]=9;
	while(top!=-1){
		beg = lower[top];
		end = upper[top];
		top-=1;

		//quick(a, beg, end, l); <---this is what I removed!
		//below is the code which was previously in a quick function.
		left = beg;
		right = end;
		loc = beg;
		while(loc!=right || loc!=left){
			while(a[loc]<=a[right] && loc!=right){
				right-=1;
			}
			if(loc==right)
				break;
			if(a[loc]>a[right]){
				int t = a[loc];
				a[loc] = a[right];
				a[right] = t;
				loc = right;
			}
			while(a[left]<=a[loc] && left!=loc){
				left+=1;
			}
			if(loc==left)
				break;
			if(a[loc]<a[left]){
				int t = a[loc];
				a[loc] = a[left];
				a[left] = t;
				loc = left;
			}
		}
		//quick function ends here

		if(beg<loc-1){
			top+=1;
			lower[top] = beg;
			upper[top] = loc-1;
		}
		if(loc+1<end){
			top+=1;
			lower[top] = loc+1;
			upper[top] = end;
		}
	}
	//sorting ends here

	for(i=0; i<10; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	cin>>c;
	}
return 0;
}
