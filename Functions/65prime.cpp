#include<iostream>
using namespace std;

bool isPrime(int n);
void  allPrime(int n);

int main(){
     int n;
    cout << "Enter the value of n : ";
    cin >> n;

    allPrime(n);
    return 0;
}

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n % i == 0 ){
            return false;
        }
    }
    return true;
}

void allPrime(int n){
    for(int i=1; i<=n; i++){
        if(isPrime(i)){
        cout << i << " " ;
        }
    }
    cout << endl;
}