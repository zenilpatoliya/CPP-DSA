#include<iostream>
using namespace std;
int largest (int a, int b, int c);


int main(){

    int a, b, c;

    cout << "Enter value of a : " ;
    cin >> a;
    cout << "Enter value of b : " ;
    cin >> b;
    cout << "Enter value of b : " ;
    cin >> c;
    cout << "Largest num = "<< largest(a,b,c) << endl;

    return 0;
}

int largest (int a, int b, int c){

    if(a >= b && a >= c ) {
        return a;

    } else if(b >= c) {
        return b;

    } else {
        return c;
    }
}