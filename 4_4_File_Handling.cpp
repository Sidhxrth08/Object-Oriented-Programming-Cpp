//Class with File  
#include <iostream> 
#include <fstream> 
using namespace std; 

class Student { 
    public: 
    
    int id; 

    void input() { 
        id = 200; 
    }

    void display() { 
        cout << id; 
    } 
}; 

int main() 
{ 
    Student s1; 
    s1.input(); 

    ofstream abc("4_4_File.txt"); 
    abc << s1.id; 
    abc.close(); 

    ifstream xyz("4_4_File.txt"); 
    xyz >> s1.id; 
    s1.display(); 
    xyz.close(); 
}