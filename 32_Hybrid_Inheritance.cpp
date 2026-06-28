#include<iostream>
using namespace std;

class Example_1{
        public:

        Example_1(){
            cout<<"Contructor called ---> Example_1"<<endl;
        }

        // void print_1(){
        //     cout<<"Function called ---> print_1"<<endl;
        // }
};

class Example_2 : public Example_1{
        public:

        Example_2(){
            cout<<"Contructor called ---> Example_2"<<endl;
        }

        // void print_2(){
        //     cout<<"Function called ---> print_2"<<endl;
        // }
};

class Example_3 : public Example_2{
        public:
        
        Example_3(){
            cout<<"Contructor called ---> Example_3"<<endl;
        }

        // void print_3(){
        //     cout<<"Function called ---> print_3"<<endl;
        // }
};

class Example_4 : public Example_2 , public Example_3{
        public:
        
        Example_4(){
            cout<<"Contructor called ---> Example_4"<<endl;
        }

        // void print_4(){
        //     cout<<"Function called ---> print_4"<<endl;
        // }
};

int main()
{
    Example_4 xyz;

    // xyz.print_2();
    // xyz.print_3();
    // xyz.print_4();


    return 0;
}