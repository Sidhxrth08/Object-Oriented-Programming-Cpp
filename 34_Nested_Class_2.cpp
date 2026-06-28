// WAP to Demonstrate Nested Class with Scope Resolution:
#include<iostream>
using namespace std;

class A{
    public:

        class B{
            public:
            
            void print(){
                cout<<"Function called print---> B"<<endl;
            }
        };
};

int main()
{
    A::B a1;

    a1.print();
   
    return 0;
}