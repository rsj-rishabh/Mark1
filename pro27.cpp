#include<iostream>
using namespace std;

class A{
    public:
        virtual void display(){
            cout<<"class parent";
        }
};

class B: public A{
    public:
        void display(){
            cout<<"class child";
        }
};

int main(){
    B obj;
    obj.display();
return 0;
}
