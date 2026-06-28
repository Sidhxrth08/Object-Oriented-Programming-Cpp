#include<iostream>
using namespace std;

class Constructor{
    int val;

    public:
        Constructor(){
            val = 50;
        }

        void show()
        {
            cout<<"Value is: "<<val; 
        }
};

int main()
{
    Constructor c1;

    c1.show();

    return 0;
}