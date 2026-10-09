#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    cout<<str<<endl;

    sort(str.begin(),str.end());
    cout<<str<<endl;

}