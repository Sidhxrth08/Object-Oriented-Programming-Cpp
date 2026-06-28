#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout<<"First Function add: "<<add(2,3)<<endl;
    cout<<"Second Function add: "<<add(3,4,5)<<endl;

    return 0;
}