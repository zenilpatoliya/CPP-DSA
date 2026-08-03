#include<iostream>
using namespace std;

int main(){
    int marks;

    cout << "Enter your marks : " ;
    cin >> marks;

    if(marks >= 90){
        cout << "A+" << endl;
    }
    else if(marks >= 80){
        cout << "A" << endl;
    }
    else if(marks >= 70){
        cout << "B+" << endl;
    }
    else if(marks >= 60){
        cout << "B" << endl;
    }
    else if(marks >= 40){
        cout << "C" << endl;
    }
    else{
        cout << "FAIL" << endl;
    }
    return 0;
}