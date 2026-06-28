#include<iostream>
using namespace std;

class Constructor{
    int val;

    public:
        Constructor(){
            val = 50;
        }

        Constructor(int x){
            val = x;
        }       

        void show()
        {
            cout<<"Value is: "<<val<<endl;
        }
};

int main()
{
    Constructor c1,c2(100);
    c1.show();
    c2.show();


    return 0;
}