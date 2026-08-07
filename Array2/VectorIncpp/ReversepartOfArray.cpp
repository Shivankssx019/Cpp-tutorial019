#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&b,int n){
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
void change(vector<int>&a){
    a[0]=4;
}
void reverse(int i,int j ,vector<int>&c){
    
    
    while(i<=j){
        int temp = c[i];
        c[i] = c[j];
        c[j] = temp;

        i++;
        j--;
    }
}
int main(){

    vector<int>v;
    int n;
    cout<<"Enter the no of Elements : ";
    cin>>n;
    cout<<"Enter the Elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v,n);
    
    reverse(0,4,v);//select the index to  reverse
    
    display(v,v.size());
}