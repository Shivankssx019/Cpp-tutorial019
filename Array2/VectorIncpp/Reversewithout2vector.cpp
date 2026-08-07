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
    
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }
    display(v,v.size());
}