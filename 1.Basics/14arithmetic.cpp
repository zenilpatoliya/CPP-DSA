#include<iostream>
using namespace std;

int main (){
    //binary
    int a = 5;
    int b = 3;
    cout << "+ " << (a + b) << endl;
    cout << "- " << (a - b) << endl;
    cout << "* " << (a * b) << endl;
    cout << "/ " << (a / b) << endl;
    cout << "% " << (a % b) << endl;

    //unary
    a++;
    cout << a << endl;
    a--;
    cout << a << endl;

    int c = ++a;
    cout << a << endl;// first a value became 6 and after put in c
    cout << c << endl;

    c = a++;
    cout << a << endl; // first a put in c (5) after a velue is 6 
    cout << c << endl;

    return 0;
}