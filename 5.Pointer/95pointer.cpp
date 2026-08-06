#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int *ptr = &a;
    cout << ptr << endl;

    ptr++; // add 1 integer
    cout << ptr << endl;
    ptr--; // back 1 int
    cout << ptr << endl;

    ptr = ptr + 3; // add 3 int, same in substraction
    cout << ptr << endl;

    int *ptr1 = &b;
    int *ptr2 = ptr1 + 3;

    cout << ptr1 - ptr2 << endl;

    return 0;
}