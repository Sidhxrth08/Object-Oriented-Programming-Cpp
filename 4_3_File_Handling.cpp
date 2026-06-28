// Structure with File
#include <iostream> 
#include <fstream> 
using namespace std; 

struct Student { 
    int id; 
}; 

int main() 
{ 
    Student s1; 
    s1.id = 101; 

    ofstream abc("4_3_File.txt"); 
    abc << s1.id; 
    abc.close(); 

    ifstream xyz("4_3_File.txt"); 
    xyz >> s1.id; 
    cout << s1.id; 
    xyz.close(); 
} 