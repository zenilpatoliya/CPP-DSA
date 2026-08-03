#include<iostream>
using namespace std;

int main(){
    int n;
    int first = 0;
    int sec = 1;
    
    cout << "Enter a number : ";
    cin >> n;

    cout << first << " " << " "<< sec << " ";

    for(int i=2; i<=n; i++){
        int third = first + sec;
        cout << third << " ";

        first = sec;
        sec = third;
    }

    
    
    return 0;

}