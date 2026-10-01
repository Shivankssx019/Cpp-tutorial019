#include<iostream>
using namespace std;
int main(){
    int a[5]={3,4,5,6,7};

int n = sizeof(a)/sizeof(a[0]);
    int b[5];
   
   for(int j=0;j<n;j++){
    int i = n-1-j;
    b[j]=a[i];
   }
   for(int i = 0; i< n;i++){
    cout<<b[i]<<" ";
   }
}
