#include<iostream>
using namespace std;

void maxProfit(int *cell,int n){
    int Buy[n];
    Buy[0] = INT32_MAX;
    for(int i=1; i<n; i++){
        Buy[i] = min(Buy[i-1], cell[i-1]);  
       
    }
    int maxPro = 0;
    for(int i=1; i<n; i++){
        int currProfit = cell[i] - Buy[i];
        maxPro = max(maxPro,currProfit);
    }
    //O(2n) = O(n)
    cout << "max profit = " << maxPro << endl;
}

int main (){
    
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(int);
    maxProfit(arr,n); 
    return 0;
}
// # Another best code optimization with same logic
// mini = arr[0] and prof = 0
// for(i=1 to n)
// diff = arr[i] - mini
// prof = max(prof,diff)
// mini = min(mini,arr[i])