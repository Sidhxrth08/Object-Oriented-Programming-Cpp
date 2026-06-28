#include<iostream>

using namespace std;

int factorial(int num)
{
    int i,a,fact;

    if(num < 0)
    {
        cout<<"Write a Bigger Value \n";
    }else{
        fact = 1;
        for(i=1;i<=num;i++)
        {
            fact = fact * i;
        }
        a = fact;
        cout<<"Factorial of "<<num<<" is "<< a;
    }
    return fact;
}

int main()
{
    int a,num;
    cout<<"Enter number: ";
    cin>>num;

    a = factorial(num);

    return 0;
}