#include<iostream>
using namespace std;

class Destructor{
    public:

    ~Destructor(){                  // Destructor (using ~ )
        cout<<"This is Destructor";
    }
};

int main()
{
    Destructor d1;

    return 0;
}