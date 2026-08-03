#include<iostream>
using namespace std;

void Hello ();
void assistant();

int main(){
    assistant();
    return 0;
}

void Hello (){
    cout << "Hello :)\n" ;
}

void assistant(){
    Hello();
    cout << "Work done :)\n" ;
}