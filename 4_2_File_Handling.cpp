// Text Alternative to binary
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int num = 1001;

    //write number into binary file
    ofstream abc("4_2_File.txt" , ios::binary);
    abc.write((char*)&num , sizeof(num));
    abc.close();

    //read number from binary file
    ifstream xyz("4_2_File.txt" , ios::binary);
    xyz.read((char*)&num , sizeof(num));
    cout<<num;
    xyz.close();
}