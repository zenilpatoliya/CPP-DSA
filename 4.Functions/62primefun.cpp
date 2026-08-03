#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n);

int main(){
    int n;
    cout << "Enter the value of num : ";
    cin >> n;

    cout << prime(n);
    return 0;
}

bool prime(int n){
    if( n==1){
        return false;
    }
    for(int i=2; i<=sqrt(n); i++){  // sqtr(n) or n-1 or i*i<=n
        if(n % i == 0){
            return false;
        }
    }
    return true;
}