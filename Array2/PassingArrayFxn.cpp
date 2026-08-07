#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i = 0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void change(int arr[],int n){
    arr[0]=69;
}
int main(){
    int arr[]={5,6,7,8,3,4,5,6,};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n-1);
    change(arr,n-1);
    display(arr,n-1);
}