#include<iostream>
using namespace std;

void printarr(int* ptr, int n){
    for(int i=0; i<n; i++){
        cout << ptr[i] << "\t";
    }
}

int main(){
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int st = 0, end = n-1;

    while(st < end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }

    printarr(arr,n);
    return 0;
}