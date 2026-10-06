#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows : ";
    cin>>m;
    int n;
    cout<<"Enter no column : ";
    cin>>n;

    int arr[m][n] , brr[m][n],res[m][n];

    cout<<"Enter first Matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Enter Second Matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }
    }
     cout<<"Resultant Matrix : \n";
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           res[i][j] = arr[i][j] + brr[i][j];
        }
     }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j] <<" ";
        }
        cout<<endl;
    }

     

}