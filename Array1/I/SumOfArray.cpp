#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[50];
    int n;
    cout<<"Enter the NO  Of element : ";
    cin>>n;
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    int sum = 0;
    for(int i = 0;i <= n-1;i++){
        sum = sum + arr[i];
    }
    cout<<"sum : "<<sum;
}