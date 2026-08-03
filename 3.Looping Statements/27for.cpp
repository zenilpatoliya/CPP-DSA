#include<iostream>
using namespace std;

int main(){
    int i,n;

    cout << "enter the value of n : ";
    cin >> n;
    
    for( i = 1; i <= n; i++ ){
    cout << i << " " ;
    }
    cout << endl;
    cout << "Last avlue of  i = " << i << endl;
    return 0;
}