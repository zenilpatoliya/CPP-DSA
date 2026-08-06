#include<iostream>
using namespace std;

void printArray(int *ptr,int n){
    for(int i=0; i<n; i++){
        cout << *ptr << "\t"; // or *(ptr+i)
        ptr ++;
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printArray(arr,n);

    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    cout << (ptr2 < ptr1) << endl;  // return true or false value on comparing contigious memory
    cout << (ptr1 == arr) << endl;
    

    return 0;
}