// WAP in c++ to print the employee details:

#include<iostream>
using namespace std;

class Employee_Details{
    private:
        int c,e;
        string a,b,d;

    public:
        int getdata(){
            cout<<"Enter Employee Name: "<<endl;
            cin>>a;
            cout<<"Enter Employee ID: "<<endl;
            cin>>b;
            cout<<"Enter Employee Year of Joining: "<<endl;
            cin>>c;
            cout<<"Enter Employee Designation: "<<endl;
            cin>> d;
            cout<<"Enter Employee Salary: "<<endl;
            cin>>e;
        }

        void showdata(){
            cout<<endl;
            cout<<"Employee Name is: "<<a<<endl;
            cout<<"Employee ID is: "<<b<<endl;
            cout<<"Employee Year of Joining is: "<<c<<endl;
            cout<<"Employee Designation is: "<<d<<endl;
            cout<<"Employee Salary is: "<<e<<endl;
        }
 
};

int main()
{
    Employee_Details e1;

    e1.getdata();
    e1.showdata();

    return 0;
}





