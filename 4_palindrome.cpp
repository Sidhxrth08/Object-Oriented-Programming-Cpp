#include<iostream>
using namespace std;

int main()
{
    long int num,rev = 0;
    int digit,x;

                                    
    cout<<"Enter Number: ";
    cin>>num;

    x = num;                            // copying the value to another variable because after loop num becomes 0

    while(num)
    {
        digit = num % 10;                 // 12345 % 10 = 5
        rev = rev * 10 + digit;           // 0 * 10 + 5 =5
        num = num/10;                       // 12345 / 10 = 1234
    }
    
    if(x == rev)
    {
        cout<<"It is Palindrome";
    }else{
        cout<<"It is not Palindrome";
    }


    return 0;
}