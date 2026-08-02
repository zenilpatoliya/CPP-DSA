#include<iostream>
using namespace std;

int main(){
    int n; 

    cout << "enter the value of n : ";
    cin >> n;

    int i = 1;
    while(i < n+1){
        cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}