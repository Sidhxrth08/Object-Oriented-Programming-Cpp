#include<iostream>
using namespace std;

class Demo{
    int v;

    public:
        Demo(){
            v = 1000;
            cout<<"First it was: "<< v <<endl;
        }

        void operator-(){
            v = v - 800;
        }

        void show(){
            cout<<"Value is: " << v << endl;
        }
};

int main()
{
    Demo d1;

    -d1;

    cout<<"After Subtracting 800 ";
    d1.show();

    return 0;
}