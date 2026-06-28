#include<iostream>
using namespace std;

class Demo{
    public:

    Demo(){
        cout<<"Constructor called ---> Demo"<<endl;
    }

    void print(){
       cout<<"Function called ---> print"<<endl;
    }
};

class Example : public Demo{
    public:

    Example(){
        cout<<"Constructor called ---> Example"<<endl;
    }

    void show(){
        cout<<"Function called ---> show"<<endl;
        }
};

int main()
{
    Example e1;

    e1.print();
    e1.show();

    return 0;
}