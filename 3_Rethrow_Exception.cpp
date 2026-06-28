#include<iostream>
using namespace std;

void example(){
    try{
        cout<<"......."<<endl;
        throw 6;
    }
    catch(int n){
        cout<<"Exception Thrown"<<endl;
        throw;
    }
}

int main()
{
    try{
        example();
    }
    catch(int n){
        cout<<"Main Catch Block =>"<<n<<endl;
    }

    return 0;
}