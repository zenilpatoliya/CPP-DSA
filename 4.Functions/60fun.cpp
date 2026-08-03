#include<iostream>
using namespace std;

bool isEven(int num);

int main(){
    int num;
    cout << "Enter the value of num : ";
    cin >> num;
   
    
    cout << isEven(num) << endl;
    return 0;
}

bool isEven(int num){
    if(num % 2 == 0){
        return true;
    }else{
        return false;
    }

}