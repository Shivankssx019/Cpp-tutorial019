#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int n = str.size();
    for(int i=0;i<n;i++){
        if(i%2 != 0){
            str[i] = '#';
        }
    }
    cout<<str;

}