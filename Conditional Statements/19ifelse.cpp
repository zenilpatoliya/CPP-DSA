#include<iostream>
using namespace std;

int main(){
    int x,y;    

    cout << "Enter value of a : " ;
    cin >> x;
    cout << "Enter value of b : " ;
    cin >> y;


    if(x >= y){
        cout << x << endl;
    }
    else{
        cout << y << endl;
    }
    return 0;
}