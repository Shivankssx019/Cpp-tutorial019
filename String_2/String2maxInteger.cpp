#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str[] = {"0123","0023","456","00182","940","2901"};
    int max = stoi(str[0]);
    string maxs = str[0];
    int n = sizeof(str)/sizeof(str[0]);
    for(int i=0;i<n;i++){
        int x = stoi(str[i]);
        if(x>max)max=x;
        maxs = str[i];
    }
    cout<<max;
    cout<<maxs;
}