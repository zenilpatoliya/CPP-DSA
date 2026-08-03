#include<iostream>
using namespace std;

int main(){
    float eng, sci, math;

    cout<<"Enter English marks : ";
    cin>>eng;

    cout<<"Enter Science marks : ";
    cin>>sci;

    cout<<"Enter Maths marks : ";
    cin>>math;

    float avg = (eng + math + sci)/3;
    cout<<"Average of marks = "<<avg<<endl;
    return 0;
}