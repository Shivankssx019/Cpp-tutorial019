#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[8]={4,4,5,7,8,8,9,0};
    int n;
    int marks;
    cout<<"Enter the NO  Of element : ";
    cin>>n;
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    //  n = sizeof(arr)/sizeof(arr[0]);
    }
    cout<<"Enter the marks :";
    cin>>marks;
    display(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]<marks)
        cout<<arr[i]<<" ";
    }
   

}

