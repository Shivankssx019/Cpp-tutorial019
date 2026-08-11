#include<iostream>
#include<climits>
using  namespace std;
int main(){
int m;
cout<<"Enter no Rows : ";
cin>>m;

int n;
cout<<"Enter  no  Column : ";
cin>>n;

int arr[m][n];

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
int max=arr[0][0];
for(int i=0;i<m;i++){
    for(int j=1;j<n;j++){
      if(max < arr[i][j]) max = arr[i][j];
    }
}
cout<<max;

}