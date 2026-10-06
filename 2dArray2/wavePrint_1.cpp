#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows of 1st Matrix : ";
    cin>>m;
    int n;
    cout<<"Enter no of Column of first Matrix : ";
    cin>>n;
    int arr[m][n];

    cout<<"Enter first Matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //print 
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}