#include<iostream>
using namespace std;

class A{
    public:

    virtual void show() = 0;
};

class B: public A{
    public:

    void show(){
        cout<<"Derived Class Function Called"<<endl;
    }
};

int main()
{
    A *a1;
    B b1;

    a1 = &b1;
    a1 -> show();

    
    return 0;
}