#include<iostream>
using namespace std;

class AGE{
    int age;

    public:
    void setdata(){
        age = 20;
    }

    friend void showdata(AGE);
};

    void showdata(AGE a){
        cout<<"Your age is: "<<a.age;
    }

int main()
{
    AGE a1;
    a1.setdata();
    showdata(a1);

    return 0;
}