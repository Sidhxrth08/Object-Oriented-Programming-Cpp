// Expain and demonstrate the Array inside a class:
#include<iostream>
using namespace std;

class ARRAY{
    int value[3];

    public:
        void setdata(){
            cout<<"Enter 3 values: ";

            for(int i = 0; i<3; i++)
            {
                cin>>value[i];
            }          

        }


        void showdata(){
            for(int i = 0; i<3; i++)
            {
                cout<<"Value at index "<<i<<" is: "<<value[i]<<endl;
        }
    }
};

int main()
{
    ARRAY a1;
    a1.setdata();
    a1.showdata();

    return 0;
}