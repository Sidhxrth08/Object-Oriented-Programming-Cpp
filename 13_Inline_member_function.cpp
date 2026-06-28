#include<iostream>
using namespace std;

class CUBE{
    public:
        inline int cube(int x){
            return x*x*x;
        }
};

int main()
{
    CUBE c1;
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Cube of "<<num<<" is: "<<c1.cube(num);

    return 0;
}