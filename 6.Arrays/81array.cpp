#include<iostream>
using namespace std;

int main (){
    int marks[5] = {1, 2, 3};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[45] << endl;
    cout << sizeof(marks) / (sizeof(int)) << endl;
    return 0;
}