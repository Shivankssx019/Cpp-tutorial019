#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}