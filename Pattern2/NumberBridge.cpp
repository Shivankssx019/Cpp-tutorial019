#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of Rows : ";
    cin>>n;
    int nsp = 1;
    int m = n-1;
    for(int i = 1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    for(int j = 1;j<=m;j++){
        int a = 1;
        for(int k = 1;k <= m+1-j;k++){
            cout<<a;
            a++;
        }
        for(int l = 1;l <= nsp;l++){
            cout<<" ";
            a++;
        }
        nsp+=2;
         for(int k = 1;k <= m+1-j;k++){
            cout<<a;
            a++;
        }
        cout<<endl;
        
    }
}
