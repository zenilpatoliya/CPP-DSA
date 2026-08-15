#include<iostream>
using namespace std;

void changeA (int &b){ // pass by refrence using alias
    b = 20;
}
void func (int arr[]) { // call by refrence 
    arr[2] = 10;
}

void func2 (int* ptr ) { // call by refrence 
    ptr[0] = 10;
}


int main(){
    int arr [] = {1,2,3,4,5};

    func(arr);
    func2(arr); // passing array name is eq. to passing the pointer

    int a = 10;
    changeA(a);

    cout << a << endl;
    cout << arr[2] << endl;
    cout << arr[0] << endl;

    return 0;
}


