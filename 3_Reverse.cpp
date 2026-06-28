#include<iostream>
using namespace std;

int main()
{
    long int num,rev = 0;
    int digit;

    cout<<"Enter Number: ";
    cin>>num;

    while(num)
    {
        digit = num % 10;                 // 12345 % 10 = 5
        rev = rev * 10 + digit;           // 0 * 10 + 5 =5
        num = num/10;                       // 12345 / 10 = 1234
    }
    cout<<"Reverse of the number is: "<<rev<<endl;


    return 0;
}