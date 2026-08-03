#include<iostream>
using namespace std;
//  A single line comment
/*
This is multiline comment */

int main(){
    int age = 17;
    int marks = 97;
    char star = '*';
    bool IsAdult = true;
    float cgpa = 9.3;
    double scgpa = 9.3;

    
    cout<<age<<" "<<marks<<" "<<star<<" "<< IsAdult<<endl;
    cout<<"size of int = "<<sizeof(int)<<endl;
    cout<<"size of char = "<<sizeof(char)<<endl;
    cout<<"size of boolean = "<<sizeof(bool)<<endl;
    cout<<"size of float = "<<sizeof(float)<<endl;
    cout<<"size of double = "<<sizeof(double)<<endl;
    return 0;
}