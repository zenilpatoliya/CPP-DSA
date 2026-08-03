#include<iostream>
using namespace std;

int factorial(int n);
int biocof(int n,int r);

int main(){
    int n,r;
    cout << "Enter the value of total sub : ";
    cin >> n;
    cout << "Enter the value of pick : ";
    cin >> r;

    cout << "binomial coefficient = " << biocof(n,r) << endl;
    return 0;
}

int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int biocof(int n,int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int result = val1 / (val2*val3);
    return result;
}