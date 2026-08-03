#include<iostream>
using namespace std;
void binTodeci(int n);

int main(){
    int n;

    cout << "Enter Binary number : ";
    cin >> n;

    binTodeci(n);

    return 0;
    
}

void binTodeci(int n){
    int binNum = n;
    int DecNum = 0;
    int pow = 1; // 2^0 2^1 2^2 ..

    while(binNum > 0){
        int LastDigit = binNum % 10;
        DecNum += LastDigit*pow;
        pow *= 2;
        binNum /= 10;
    }

cout  << "DecNum = " << DecNum << endl;

}