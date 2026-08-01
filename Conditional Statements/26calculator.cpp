#include<iostream>
using namespace std;

int main(){
    float a,b;
    char op;

    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    cout << "Enter the operator : ";
    cin >> op;

    //calculator
    if(op == '+'){
        cout << "addition = "<< a + b << endl;
    }else if(op == '-'){
        cout << "subtraction = " << a - b << endl;
    }else if(op == '*'){
        cout << "multiplicaton = " << a * b << endl;
    }else if(op == '-'){
        cout << "divedation = " <<  a / b << endl;
    }else{
        cout << "Wrong chosen operator" << endl;
    }

    //switch
    switch(op){
        case '+' :  cout << "addition = "<< a + b << endl;
        break;
        case '-' :  cout << "subtraction = "<< a + b << endl;
        break;
        case '*' :  cout << "multiplicaton = "<< a + b << endl;
        break;
        case '/' :  cout << "divedation = "<< a + b << endl;
        break;
        default :   cout << "Wrong chosen operator" << endl;
    }
    return 0;
}