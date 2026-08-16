#include<iostream>
using namespace std;

void maxSubArraySum(int *arr,int n){
    int maxSum = INT32_MIN;  // smallest value

    for(int st=0; st<n; st++){ //start = 2
        int sum = 0;
        for(int end=st; end<n; end++){ // end = 2,3,4,5
            sum += arr[end];
            maxSum = max(maxSum,sum);  
           
        }
    
    }

    cout << "Max Sum is equal to : " << maxSum;
}

int main(){
    int arr[] = {2, -3 ,6 , -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubArraySum(arr,n);

    return 0;
}