// WAP tp demonstrate Arrays of object:
#include<iostream>
using namespace std;

class DEMO{
    int n;

    public:
        void getdata(){
            cout<<"Enter value: ";
            cin>>n;
        }

        void showdata(){
            cout<<"Value of n is: "<<n<<endl;
            
        }
};

int main()
{
    int i;
    DEMO d[3];

    for ( i = 0; i < 3; i++)
    {
        cout<<"Enter value for Demo "<<i<<endl;
        d[i].getdata();
    }
    
    
    for(i=0;i<3;i++)
    {
        d[i].showdata();
    }

    
    return 0;
}