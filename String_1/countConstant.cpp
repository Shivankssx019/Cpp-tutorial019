#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of string : ";
    cin>>n;
    char str[10];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    int count = 0;
    for(int i=0;i<n;i++){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&  str[i] != 'o' && str[i] != 'u' ){
            count++;
        }
    }
    cout<<count;
    
    
    
}