#include<iostream>
using namespace std;

int main(){
    int b;

    cout << "Enter One Number: ";
    cin >> b;

    try{
        if(b == 0){
            throw 8;              // int exception
        }
        else if(b == 1){
            throw 5.5;            // double exception
        }
        else if(b == 2){
            string p = "xyz";
            throw p;              // string exception
        }
        else if(b == 3){
            throw 'x';            // char exception
        }
        else{
            cout << "Valid Input, No Exception Occurred";
        }
    }

    catch(int){
        cout << "Error: You cannot enter 0";
    }

    catch(double){
        cout << "Error: You cannot enter 1 (double exception)";
    }

    catch(string){
        cout << "Error: You cannot enter 2 (string exception)";
    }

    catch(...){
        cout << "Error: Unknown Exception Caught";
    }

    return 0;
}