#include<iostream>
using namespace std;

int main(){
    int len;
    cout << "Enter length of array : ";
    cin >> len;

    int arr[len] ;
    

     for(int i=0; i<len; i++){
        cin >> arr[i] ;
     }


    for(int i=0; i<len; i++){
        cout << arr[i] << "\t";
    }

    cout << endl;
    return 0;
}