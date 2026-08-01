#include<iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter your age : " ;
    cin >> age;

    if(age >= 18){
        cout << "Can Vote" << endl;
    }
    if(age >= 35){
        cout << "contest for election" << endl;
    }
    else{
        cout << "Cannot vote" << endl;
    }
    return 0;
}