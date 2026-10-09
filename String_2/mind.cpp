#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str = "ramayan";
    vector<string>v;
    
    sort(str.begin(),str.end());
    int count = 1;
    int maxcount = 1;
    for(int i=1;i<str.size();i++){
        if(str[i]==str[i-1])count++;
        else count = 1;
        if(count>maxcount)maxcount = count;
    }
    count =1;
    for(int i=1;i<str.size();i++){
        if(str[i]==str[i-1])count++;
        else count = 1;
        if(count == maxcount){
            cout<<str[i]<<" "<<maxcount;
        }
    }
}