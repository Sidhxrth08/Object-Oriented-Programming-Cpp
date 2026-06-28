#include<iostream>
using namespace std;

class Example_1{
        public:

        Example_1(){
            cout<<"Contructor called ---> Example_1"<<endl;
        }

        void print_1(){
            cout<<"Function called ---> print_1"<<endl;
        }
};

class Example_2 : public Example_1{
        public:

        Example_2(){
            cout<<"Contructor called ---> Example_2"<<endl;
        }

        void print_2(){
            cout<<"Function called ---> print_2"<<endl;
        }
};

class Example_3 : public Example_2{
        public:
        
        Example_3(){
            cout<<"Contructor called ---> Example_3"<<endl;
        }

        void print_3(){
            cout<<"Function called ---> print_3"<<endl;
        }
};

int main()
{
    Example_3 A;

    A.print_1();
    A.print_2();
    A.print_3();


    return 0;
}