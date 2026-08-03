#include<iostream>
using namespace std;

int factorial(int num);

int main(){
    int num;
    cout << "Enter the value of num : ";
    cin >> num;
    
    factorial(num);
    return 0;
}


int factorial(int num){
    int fact=1;
    for(int i = 1; i <= num; i++){
    fact = fact*i;
    }
    cout << num << "!" << " = " << fact << endl;
    return fact; //0 case 1 out
}