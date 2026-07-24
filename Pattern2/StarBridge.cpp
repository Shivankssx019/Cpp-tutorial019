#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of Lines : ";
    cin>>n;
    for(int a=1;a<=2*n-1;a++){
        cout<<"*";
    }
    cout<<endl;
    int nsp = 1;
    int m = n-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
    }
    cout<<endl;
}
}