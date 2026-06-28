#include<iostream>
using namespace std;

int main()
{
    int x = 7;
    int *ptr;
    ptr = &x;

    cout<< *ptr <<endl;
    cout<< ptr <<endl;

    return 0;
}