#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin >>n;
    int rev = 0 , lastDigit;
    while(n>0){
        lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;  
    }
    cout<<rev;
}