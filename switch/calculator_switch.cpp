#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the first value : ";
    cin >> a;
    cout <<"Enter second value : ";
    cin>> b;
    cout <<"Enter the operator : ";
    cin >> op;
    switch(op){
        case '+' :
            cout << a+b;
            break;
        case '-' :
            cout << a-b;
            break;
        case '*' :
            cout << a*b;
            break;
        case '/' :
            cout << a/b;
            break;
        default :
            cout<<"invalid operator";
    }
}