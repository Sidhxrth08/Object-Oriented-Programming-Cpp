#include<iostream>
using namespace std;

class Constructor{
    int val;

    public:
        Constructor(int m){
            val = m;
        }

        void show()
        {         
            cout<<"Value is: "<<val;
        }
};

int main()
{
    Constructor c1(1000);

    c1.show();

    return 0;
}