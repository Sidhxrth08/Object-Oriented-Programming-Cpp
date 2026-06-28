// Exception(Error) Handling
// try , throw , catch block
#include<iostream>      
using namespace std;

int main()
{
    int a , b;

    cout<<"Enter 2 Numbers:"<<endl;
    cin>>a>>b;

    try{
        if(b == 0){
            throw 8;
        }
        
    }

    catch(int x){
        cout<<"Error: Division by zero is not allowed."<<endl;
    }

    cout<<"Result (Division): "<< a/b <<endl;
}