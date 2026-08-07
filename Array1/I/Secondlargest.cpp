#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter no of Element : ";
    cin>>n;
    int arr[50];
    cout<<"Enter the elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    display(arr,n-1);
    int max=INT16_MIN;
    for(int i=0;i<=n-1;i++){
        if(max < arr[i]) max =arr[i];
    }
    cout<<max<<endl;
    int SMax = INT16_MIN;
    for(int i=0;i<=n-1;i++){
        if(max != arr[i] && SMax < arr[i]) SMax = arr[i];
    }
    cout<<"SMax : "<<SMax;
}