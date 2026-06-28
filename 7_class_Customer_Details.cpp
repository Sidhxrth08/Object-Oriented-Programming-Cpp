// WAP in c++ to print the employee details:

#include<iostream>
using namespace std;

class Customer_Details{
    private:
        int Customer_ID, Quantity, Price;
        long long int Phone_no;
        string Customer_Name;

    public:
        int getdata(string n,int i, int q, long long int pn, int p)
        {
                Customer_Name = n;
                Customer_ID = i;
                Quantity = q;
                Phone_no = pn;
                Price = p;
        }

        void showdata(){
            cout<<"Customer Name is: "<<Customer_Name<<endl;
            cout<<"Customer ID is: "<<Customer_ID<<endl;
            cout<<"Customer Quantity Purchased is: "<<Quantity<<endl;
            cout<<"Customer Phone no. is: "<<Phone_no<<endl;
            cout<<"Customer Purchase Amount is: "<<Price<<endl;
        }
 
};

int main()
{
    Customer_Details c1;
    string n;
    int i,q,p;
    long long int pn;
            cout<<"Enter Customer Name: "<<endl;
            cin>>n;
            cout<<"Enter Customer ID: "<<endl;
            cin>>i;
            cout<<"Enter Customer Quantity Purchased: "<<endl;
            cin>>q;
            cout<<"Enter Customer Phone no.: "<<endl;
            cin>>pn;
            cout<<"Enter Customer Purchase Amount: "<<endl;
            cin>>p;

    c1.getdata(n,i,q,pn,p);
    c1.showdata();

    return 0;

}