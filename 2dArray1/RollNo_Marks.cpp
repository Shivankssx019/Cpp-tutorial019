#include<iostream>
using namespace std;
int main(){
    int m=4;
    // cout<<"Enter Marks : ";
    // cin>>m;

    int n=2;
    // cout<<"Enter Roll no : ";
    // cin>>n;

    int arr[4][2];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }

     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
