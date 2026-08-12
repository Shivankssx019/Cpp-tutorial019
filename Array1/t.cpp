#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no Rows : ";
    cin>>n;
    int a[n][n];
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

     for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;

    }
cout<<endl;

// tranform

    for(int i = 0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }

    }

    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;

    // Reverse  of each row 
        for(int k=0;k<n;k++){ //here k = row and i/j = work as column  to revese 
            int i = 0;
            int j = n-1;
            while(i<=j){
                int temp = a[k][i];
                a[k][i] = a[k][j];
                a[k][j] = temp;

                i++;
                j--;
            }
        }
        for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;
    

     }
    