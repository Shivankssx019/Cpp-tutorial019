#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v(5,7);
    cout<<v[0]<<endl;
    cout<<v.size()<<endl;


    vector<int>v1(7);
    cout<<"Enter the element : ";
    for(int i=0;i<6;i++){
        cin>>v1[i];
    }
    cout<<"result : ";
     for(int i=0;i<6;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<v1.size();

}