#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int reverce = 0; 
    while(num > 0){
        int lastDigit = num % 10;
        reverce = 10*reverce + lastDigit;
        num = num / 10;
    }
    cout << reverce;
    return 0;
}