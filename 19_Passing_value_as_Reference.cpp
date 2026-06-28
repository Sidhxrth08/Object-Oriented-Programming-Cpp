#include<iostream>
using namespace std;

class Demo{
    public:
    int a;

    void set(int x){
        a = x;
    }
};

    void update(Demo &y){
        y.a = 77;
        cout<<"Updated Value of x: "<<y.a<<endl;
    }

int main()
{
    Demo d1;
    d1.set(20); 

    cout<<"Value of x Before change: "<<d1.a<<endl;

    update(d1);

    return 0;
}