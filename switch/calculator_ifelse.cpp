#include<iostream>
using namespace std ;
int main(){
    int a,b;
    char op;
    cout<<"Enter the first value : ";
    cin >> a;
    cout <<"Enter second value : ";
    cin>> b;
    cout <<"Enter the operator : ";
    cin >> op;
    if(op =='+')
        cout <<a+b;
    if(op == '-')
        cout <<a-b;
    if(op == '*')
        cout <<a*b;
    if(op == '/')
        cout <<a/b;
}