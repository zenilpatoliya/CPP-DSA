#include<iostream>
using namespace std;

int prod(int a, int b);

int main(){
    int a,b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    cout << "Product is : " << prod(a,b);
    return 0;
}

int prod(int a, int b){    
    return  a * b;
}