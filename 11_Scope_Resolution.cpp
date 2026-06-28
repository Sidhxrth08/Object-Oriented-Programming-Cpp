// WAP in c++ to Demonstrate Scope Resolution:

#include<iostream>
using namespace std;

int x = 100;

class Demo{
    public:
        void display();
};

    void Demo::display()
    {
        int x = 50;

        cout<<"Local x: "<< x <<endl;
        cout<<"Global x: "<< ::x <<endl;
    }

int main()
{
    Demo d1;

    d1.display();

    return 0;
}