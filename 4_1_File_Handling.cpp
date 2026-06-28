// Opening and Closing a File
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream abc("4_1_File.txt");
    abc<<"Hello";
    abc.close();

    ifstream xyz("4_1_File.txt");
    string data;
    xyz>>data;
    cout<<data;
    xyz.close();
}