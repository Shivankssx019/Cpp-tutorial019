#include<iostream>
using namespace std;
int main(){
    int n , d , sum = 0;
    cout<<"Enter the Number : ";
    cin >> n;
    while(n>0){
        d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
    cout<<"The sum of digit is : "<<sum;
    
}