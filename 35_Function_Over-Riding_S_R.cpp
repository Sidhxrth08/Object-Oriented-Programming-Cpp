// Function Over-Riding with scope resolution:
#include<iostream>
using namespace std;

class A{
    public:

    void print(){
        cout<<"Class A"<<endl;
    }
};

class B : public A{
    public:

    void print(){
        cout<<"Class B"<<endl;
    }
};

int main()
{
    B b1;

    b1.A::print();
    b1.B::print();

    return 0;
}