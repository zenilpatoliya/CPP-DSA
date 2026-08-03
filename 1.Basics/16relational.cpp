#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 5;

    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    //Logical  operator

    cout << ((3 < 5) && (10 == 5)) << endl;
    cout << ((3 < 5) || (10 == 5)) << endl;
    cout << (! (10 == 5)) << endl;


    return 0;
}