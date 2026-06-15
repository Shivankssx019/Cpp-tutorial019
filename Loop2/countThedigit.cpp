#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int count = 0;
    int a = n;
    while(n>0){
        n = n / 10;
        count++;
    }
    if(a==0){
        cout<<"The number of digit is 1";
    }
    else{
    cout<<"The number of digit is "<<count;}


}