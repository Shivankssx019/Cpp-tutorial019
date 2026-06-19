#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of Rows : ";
    cin>>n;
    int k = 1;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}