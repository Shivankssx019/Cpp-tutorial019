#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i = 1;i <= x;i++){
        f *= i;}
        return f;
    
}
int main(){
int n,r;
cout<<"Enter n : " ;
cin>>n;
cout<<"Enter r : ";
cin>>r;
int nfact = fact(n);
int rfact = fact(r);
int nrfact = fact(n-r);
int ncr = nfact/(rfact*nrfact);
int pcr = nfact/(nrfact);
cout<<"ncr = "<<ncr;
cout<<"pcr = "<<pcr;
    
}   
