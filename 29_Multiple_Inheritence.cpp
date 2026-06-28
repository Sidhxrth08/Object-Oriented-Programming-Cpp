#include<iostream>
using namespace std;

class Demo_1{
        public:

        Demo_1(){
            cout<<"Contructor called ---> Demo_1"<<endl;
        }

        void show_1(){
            cout<<"Function called ---> show_1"<<endl;
        }
};

class Demo_2{
        public:

        Demo_2(){
            cout<<"Contructor called ---> Demo_2"<<endl;
        }

        void show_2(){
            cout<<"Function called ---> show_2"<<endl;
        }
};

class Demo_3 : public Demo_1 , public Demo_2{
        public:

        Demo_3(){
            cout<<"Contructor called ---> Demo_3"<<endl;
        }

        void show_3(){
            cout<<"Function called ---> show_3"<<endl;
        }
};

int main()
{
    Demo_3 A;

    A.show_1();
    A.show_2();
    A.show_3();


    return 0;
}