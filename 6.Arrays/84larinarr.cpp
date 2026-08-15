#include<iostream>
using namespace std;

int main(){
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    int largest = arr[0];
    int smallest = arr[0];

    for(int i=0; i<n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    cout << "Largest of array = " << largest << endl;
    cout << "smallest of array = " << smallest << endl;
    
    cout << *(arr) << endl; // arr[0]
    cout << *(arr+1) << endl; // arr[1] 
    return 0;
}