#include<iostream>
using namespace std;

class A{
    public:

    virtual void show(){
        cout<<"Base Class Function Called"<<endl;
    }
};

class B: public A{
    public:

    void show(){
        cout<<"Derived Class Function Called"<<endl;
    }
};

class C: public A{
    public:

    void show(){
        cout<<"Derived Class Function Called(C)"<<endl;
    }
};

int main()
{
    A *A1;
    B B1;
    C C1;

    A1 = &B1;
    A1 = &C1;
    A1 -> show();

    return 0;
}