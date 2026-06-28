#include<iostream>
using namespace std;

class Class_1{
    public:

        class Class_2{
            public:
            
            void print(){
                cout<<"Function called print---> Class_2"<<endl;
            }
        };

        Class_2 xyz;

        void show(){
            xyz.print();
        }
};

int main()
{
    Class_1 a1;

    a1.show();
   
    return 0;
}