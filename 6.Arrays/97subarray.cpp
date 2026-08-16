#include<iostream>
using namespace std;

void printSubarray(int *arr,int n){
        for(int st=0; st<n; st++){        // n time run
            for(int end=st; end<n; end++){  // n time run
                // cout << "(" << st << "," << end << ") ";
                for(int i=st; i<=end; i++){  // n time run
                    cout << arr[i];
                }
                cout <<",";
            }
            cout << endl;
        }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    
    printSubarray(arr,n);    // time O(n^3)

    return 0;
}