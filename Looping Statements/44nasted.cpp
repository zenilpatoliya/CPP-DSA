#include<iostream>
using namespace std;

int main(){
     int n;
     int i;

    cout << "Enter a number : ";
    cin >> n;

    //oueter loop
    for( i=1; i<=n; i++){
        //inner loop
        for(int j=1; j<=n; j++){
            //work
            cout << i << " " ;
        }
         cout << endl; 
    }

    cout << i << endl ;
    return 0;
}