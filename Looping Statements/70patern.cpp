#include<iostream>
using namespace std;

int main(){
    int n;
    bool val = true;
    
    
    cout << "Enter a number : ";
    cin >> n; 

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){

            if((i+j)%2 != 0){
            cout << !val;
            } 
            else{
            cout << val;
            }
        }
         cout << endl;
    }
    
    return 0;
}