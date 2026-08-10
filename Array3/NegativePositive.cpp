
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&b,int n){
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

void NegPos(vector<int>&v,int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(v[i]<0){ i++;}

        if(v[j]>0) {j--;}
        if(v[i]>0 && v[j]<0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            j--;
            i++;
        }
        
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
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    display(v,n);

    NegPos(v,n);

   
    display(v,n);
}