#include<iostream>
using namespace std;
char alpha(char ch);


int main(){
char ch;

cout << "Enter a char : ";
cin >> ch;

cout << alpha(ch) << endl;

    return 0 ;
}

char alpha(char ch){
    if(ch == 'z'){
        return 'a';
    }else if(ch == 'Z'){
        return 'A';
    }else{
        return (++ch);
    }
}