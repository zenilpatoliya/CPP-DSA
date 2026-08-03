#include<iostream>
using namespace std;

int main(){
    int num;
    bool isPrime = true;
    cout << "Enter a number : ";
    cin >> num;
    
    for(int i = 2; i < num; i++){
        if(num % i == 0){
        isPrime = false;
            break;
        }
    }

    if (isPrime){
        cout << "Given number is a prime number";
    } else{
        cout << "Given number is a composite number";
    }
    return 0;
}