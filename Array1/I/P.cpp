#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,6,6,8}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ;i <n;i++){
        cout<<arr[i]<<" ";
    }
}