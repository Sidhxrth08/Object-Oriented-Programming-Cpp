#include<iostream>
using namespace std;

class Demo{
    int x;

    public:
        Demo(){
            cout<<"Default Constructor Called "<<endl;
            x = 33;
        }

        Demo(int m){
            x = m;
            cout<<x<<endl;
        }

        Demo(const Demo &z)
        {
            // z.x = 100;
            cout<<"Value of x: "<<z.x<<endl;
            cout<<"Copy Constructor Called"<<endl;
        }
};

int main()
{
    Demo d , d1(77) , d2(d);

   
    return 0;
}