// WAP to Demonstrate Diamond Problem:
// Multiple Inheritance Ambiquity

#include<iostream>
using namespace std;

class A{
    public:

    void show(){
        cout<<"Class A"<<endl;
    }
};

class B: virtual public A{
   public:

    void show(){
        cout<<"Class B"<<endl;
    }
};

class C: virtual public A{

};

class D: public B , public C{ 
    
  
};

int main()
{
    D xyz;
    xyz.show();

    return 0;
}