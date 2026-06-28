//Simple Random Access Concept 
#include <iostream> 
#include <fstream> 
using namespace std; 

int main()
{ 
    ofstream abc("4_5_File.txt", ios::binary); 
    int a = 10, b = 20, c = 30; 

    abc.write((char*)&a, sizeof(a)); 
    abc.write((char*)&b, sizeof(b)); 
    abc.write((char*)&c, sizeof(c)); 
    abc.close(); 


    ifstream xyz("4_5_File.txt", ios::binary); 
    int x; 

    xyz.seekg(2 * sizeof(int));   // jump to 3rd value 
    xyz.read((char*)&x, sizeof(x)); 
    cout << x; 
    xyz.close(); 
}