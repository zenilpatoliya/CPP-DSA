#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;

    cout << "enter a 3 digit number : ";
    cin >> num;
    int n = num;

    while(n > 0){
        int lastDigit = n % 10;
        sum = (lastDigit*lastDigit*lastDigit) + sum;
        n = n / 10;
    }

    if (sum == num){                    
        cout << "Armstrong number";
    } else{
        cout << "NOT an armstrong number";
    }
    return 0;
}