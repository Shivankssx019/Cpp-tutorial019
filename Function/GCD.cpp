#include<iostream>
using namespace std;
int GCD(int a,int b){
    int HCF = 1;
    for(int i = min(a,b);i >= 1;i--){
        if(a%i==0 && b%i==0){//i  is common factor
            HCF = i;
            break;
        }
    }
        return HCF;
    
}
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    cout<<GCD(a,b);
}