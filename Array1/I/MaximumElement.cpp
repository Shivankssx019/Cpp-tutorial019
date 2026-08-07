#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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
    cout<<endl;
    int max=arr[0];
    for(int i = 1;i < n;i++){
        if(max < arr[i]) max = arr[i];
    }
    cout<<max;
}