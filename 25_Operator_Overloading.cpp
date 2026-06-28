#include<iostream>
using namespace std;

class Demo{
    int v;


    public:
        Demo(){
            v = 100;
        }

        Demo operator+(Demo D){
            D.v = v+200;

            return D;
        }

        void show()
        {
            cout<<"Value is: " << v << endl;
        }
};

int main()
{
    Demo d1,d2;

    d2 = d2 + d1;

    cout<<"In d1 ";
    d1.show();
    cout<<"In d2 ";
    d2.show();


    return 0;
}