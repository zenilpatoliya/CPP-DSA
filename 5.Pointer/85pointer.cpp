#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << ptr2 << endl;

    cout << *(&a) << endl;
    cout << *ptr << endl;

    cout << ptr << endl;
    cout << *ptr2 << endl;
    cout << **ptr2 << endl;
    
    float pi = 3.14;
    float *ptr3 = &pi;
    cout << sizeof(ptr) << endl;
    cout << sizeof(ptr3) << endl;


    int* ptr4 ;// garbage
    int** ptr1 = NULL; // Concept
    


    return 0;
}