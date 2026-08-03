#include<iostream>
using namespace std;
int absquare (int a, int b);


int main(){

    int a, b;

    cout << "Enter value of a : " ;
    cin >> a;
    cout << "Enter value of b : " ;
    cin >> b;
    cout << absquare(a,b) << endl;

    return 0;
}

int absquare (int a, int b){
    return (a+b)*(a+b);
}