// WAP in c++ to Demonstrate Type casting:

#include<iostream>
using namespace std;

int main()
{
    float f = 15.75;
    int a = 20;
    int b = 7;

    int i = (int)f;
    float res = static_cast <float> (a) / (b);

    cout<<"Original Float: "<<f<<endl;
    cout<<"Float to int: "<<i<<endl;
    cout<<"Integer Division with Cast: "<<res<<endl;

    
    return 0;
}