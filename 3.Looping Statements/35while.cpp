#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    while(num > 0){
        int lastDigit = num % 10;
        cout << lastDigit;
        num = num / 10;
    }
    return 0;
}