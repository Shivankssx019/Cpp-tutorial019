#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter 1st String : ";
    getline(cin,s);

    string t;
    cout<<"Enter  2nd String : ";
    getline(cin,t);
    
    bool flag = false;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t) cout<<true;
       else{ cout<<false; }
}