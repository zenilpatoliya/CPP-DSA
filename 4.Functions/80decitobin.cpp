#include<iostream>
using namespace std;
void decTobin(int n);

int main(){
    int n;

    cout << "Enter Decimal number : ";
    cin >> n;

    decTobin(n);

    return 0;
    
}

void decTobin(int n){
    int decnum = n;
    int binnum = 0;
    int pow = 1; // 10^0 10^1 10^2 ..

    while(decnum > 0){
        int rem = decnum % 2;
        binnum += rem*pow;
        pow *= 10;
        decnum /= 2;
    }

cout  << "binary num = " << binnum << endl;

}