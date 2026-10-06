#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows of 1st Matrix : ";
    cin>>m;
    int n;
    cout<<"Enter no of Column of Second Matrix : ";
    cin>>n;
    int arr[m][n];
    int p;
    cout<<"Enter no of Rows of 2nd Matrix : ";
    cin>>p;
    int q;
    cout<<"Enter no column of 2nd Matrix : ";
    cin>>q;
    int brr[p][q];

    cout<<"Enter first Matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter Second Matrix : \n";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];
        }
    }
    int res[m][q];
    if(n==p){
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j] = res[i][j] + arr[i][k] *  brr[k][j];
                }
            }
        }
    }
    else{
        cout<<"Multiplication is not possible";
    }
    cout<<"Resultant Matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


}