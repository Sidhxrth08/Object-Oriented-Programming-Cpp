// WAP in c++ to print the employee details:

#include<iostream>
using namespace std;

class AREA{
    private:
        int Length, Breadth, area;

    public:
        int getdata(int L, int B)
        {

            Length = L;
            Breadth = B;

            area = L * B;
        }

        void showdata(){
            cout<<endl;

            cout<<"Area of the Rectangle is: "<<area<<endl;
        }
        
        
 
};

int main()
{
    AREA a1;
    int l,b;

            cout<<"Enter Length: "<<endl;
            cin>>l;
            cout<<"Enter Breadth: "<<endl;
            cin>>b;
           
    a1.getdata(l,b);
    a1.showdata();

    return 0;
}


