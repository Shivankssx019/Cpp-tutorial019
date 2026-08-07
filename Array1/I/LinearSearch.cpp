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
    
    int x;
    cout<<"Enter the Element wants to search";
    cin>>x;
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(x==arr[i]) flag=true;
    }
    if(flag==true){
        cout<<"Element Exist";
    }
    else cout<<"404 Elent does not exist";

}