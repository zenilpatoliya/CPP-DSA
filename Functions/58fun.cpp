#include<iostream>
using namespace std;

int sum(int a, int b=1){//a and b are parameter's      
    int sum = a + b;
    return sum;
}

int diff(int a, int b){//a and b are parameter's
    int diff = a - b;
    return diff;
}

int main(){
    int s = sum(2,4); // 2 and 4 arguments
    int d = diff(4,2);
    cout << "Sum = " << s << endl;
    cout << "Diff = " << d << endl;

    cout << "Sum = " << sum(6) << endl; //because defalt para..

    return 0;
}