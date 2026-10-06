#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows : ";
    cin>>m;
    int n;
    cout<<"Enter no column : ";
    cin>>n;

    int arr[m][n];

    cout<<"Enter first Matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int brr[n][m];
    cout<<"Transpose  : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl<<" ";
    }

}