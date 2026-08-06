#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int* ptr = &a;
    int** pptr = &ptr;

    cout << *ptr << endl;
    cout << **pptr << endl;
    cout << ptr << endl;
    cout << *pptr << endl;
    return 0;
}