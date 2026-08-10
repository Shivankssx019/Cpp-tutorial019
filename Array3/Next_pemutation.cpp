#include<iostream>
#include<vector>
using namespace  std;

int nextpermu(vector<int>& v){
    int idx = -1;
    int n = v.size();
    for(int i = n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }

    if(idx== -1){
        int i = 0;
        int j = n-1;
        while(i<=j){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
   
int i = idx+1;
int j = n-1;

while(i<=j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
}

// biggest then idx
int k = -1;
for(int i = idx+1;i<n;i++){
    if(v[i]>v[idx]){
        k = i;
        break;
    }
}

// swapping idx and bigger no

int temp = v[idx];
v[idx] = v[k];
v[k] = temp;
cout<<"result";
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;}
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

    nextpermu(v);

   
}