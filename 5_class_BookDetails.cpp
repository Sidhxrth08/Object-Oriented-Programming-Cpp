/* Create a class book with data members title and price

  Create a member function to accept book details and another function to display them.
  
  Create an object of the class in main() and demonstrate the working    */

#include<iostream>
using namespace std;

class Book{
    private:
        int price;
        string title;

    public:
        int a(){
            cout<<"Enter Book Name: \n";
            cin>>title;
            cout<<"Enter Book Price: ";
            cin>>price;
        }

        void showdata(){
            cout<<endl<<"Your Book Name is: "<<title;
            cout<<endl<<"Your Book Price is: "<<price;

        }
};

int main()
{
    Book b1;
    b1.a();
    b1.showdata();

    return 0;
}