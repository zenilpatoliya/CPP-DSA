#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;

    cout << "enter the value of number : ";
    cin >> num;
    
    while(num > 0){
    int lastDigit = num % 10;
    sum += lastDigit;
    num = num / 10;
    }

    cout << "sum = " << sum << endl;
    return 0;
}
    