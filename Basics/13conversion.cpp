#include<iostream>
using namespace std;

int main(){

    //implicit
    cout << (10/3) << endl;
    cout << (10/3.0) << endl;
    cout << ('A' + 1) << endl;
    cout << ('a' + 0) << endl;

    //explicit
    cout << (int)('A') << endl;
    cout << ((float)10/3) << endl;
    cout << (char)('A' + 1) << endl;

    cout << (bool)3+2;
    return 0;
}