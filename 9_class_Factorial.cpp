// WAP in c++ to find the factorial of a number provided by user(using class):

#include<iostream>

using namespace std;

class FACTORIAL{
    private:
        int fact,a,i,f,num;

    public:
        void getdata(int f){
            num = f;

            if(num < 0)
            {
                 cout<<"Write a Bigger Number";
            }else{
                   fact = 1;
                   for(i=1;i<=num;i++)
                   {
                        fact = fact * i;
                  }
                 a = fact;

                showdata();
                }
        }

        void showdata()
        {
            cout<<"Factorial of "<<num<<" is "<< a;
        }
};
int main()
{
    FACTORIAL f1;
    int num;

    cout<<"Enter Number: ";
    cin>>num;

    f1.getdata(num);
    // f1.showdata();
    
    return 0;
}