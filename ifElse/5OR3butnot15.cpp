#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin >>n;
    // if((n%3==0 || n%5==0) && n%15 !=0){
    //     cout<<"The number is divisible by 3 or 5 but not 15";
    // }
    // else{
    //     cout<<"Not matching the condition";
    // }
    if(n%3==0 || n%5==0){
        if(n%15 !=0)
        {
            cout<<"The number is divisible by 3 or 5 but not 15";
        }
        else{
            cout<<"Not matching condition";
        }
        
    }
    else{
        cout<<"Not matching the condition";
    }
}