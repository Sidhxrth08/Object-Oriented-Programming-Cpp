#include<iostream>
using namespace std;

class First{
    public:

    First(){
        cout<<"Constructor called ---> First"<<endl;
    }

    void f1(){
        cout<<"Function called ---> f1"<<endl;
    }
};

class Second : public First{
    public:

    Second(){
        cout<<"Constructor called ---> Second"<<endl;
    }

    void f2(){
        cout<<"Function called ---> f2"<<endl;
    }
};

class Third : public First{
    public:

    Third(){
        cout<<"Constructor called ---> Third"<<endl;
    }

    void f3(){
        cout<<"Function called ---> f3"<<endl;
    }
};


int main()
{
    Third x;
    Second y;

    x.f1();
    y.f2();
    x.f3();

    return 0;
}