#include<iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
int sum(int a, int b, int c);

int main (){
    sum(2,3);
    sum(1.5,2.9);
    sum(1,3,6);
    
    return 0;
}

int sum(int a, int b){
    cout << (a+b) << endl;
    return a+b;
}

double sum(double a, double b){
     cout << (a+b) << endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout << a + b + c << endl;
    return a+b+c;
}