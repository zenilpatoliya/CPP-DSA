#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter yur age : ";
    cin >> age ;
    bool isAdult = (age >= 18) ? true : false;
    cout << isAdult << endl;

    //Largest
    int a = 5;
    int b = 10;
    int Largest = a > b ? a : b;
    cout << "Largest number is : " << Largest << endl;

    //Odd or even
    int num = 13;

    bool isEven = num % 2 == 0 ? true : false;
    return 0;
}
