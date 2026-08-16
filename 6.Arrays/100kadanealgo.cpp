#include<iostream>
using namespace std;

void maxarr(int *arr,int n){
    int sum = 0;
    int MaxSum = INT32_MIN;

    for(int i=0; i<n; i++){
        sum += arr[i];
        MaxSum = max(sum,MaxSum); 
        if(sum < 0){
            sum = 0;
        }
    }
    cout << "Max Sum is equal to : " << MaxSum;

}

int main(){
    int arr[] = {2, -3 ,6 , -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxarr(arr,n);
    return 0;
}