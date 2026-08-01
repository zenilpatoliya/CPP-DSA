#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;
    cout << "Enter C : ";
    cin >> c;

    if(a >= b && a >= c){
        cout << "Largest number is " << a <<endl;
    } else  if(b >= a && b >= c){
        cout << "Largest number is " << b <<endl;
    } else{
        cout << "Largest number is " << c <<endl;
    }
    return 0;
}