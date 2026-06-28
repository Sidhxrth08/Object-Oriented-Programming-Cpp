#include<iostream>
using namespace std;

class XYZ{
    public:
        static int count;
        void increase(){
            count++;
        }
};

// int XYZ::count = 0;

int main()
{
    XYZ x1,x2;
    x1.count=0;
    x1.increase();

    cout<<"First Increment: "<<x1.count<<endl;

    x2.increase();
    cout<<"Second Increment: "<<XYZ::count<<endl;

    return 0;
}