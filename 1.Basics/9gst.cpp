#include<iostream>
using namespace std;

int main (){
    float pencil,pen,earser,total;

    cout<<"Enter the cost of pen : ";
    cin>>pen;

    cout<<"Enter the cost of pencil : ";
    cin>>pencil;

    cout<<"Enter the cost of earser : ";
    cin>>earser;

    total = pen + pencil + earser;

    cout<<"Total price : "<< total << endl;
    cout<<"Total price with gst :" << (total + (total*.18)) << endl;


    return 0;
}