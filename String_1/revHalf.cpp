#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int n = str.size();
    n = n/2;
    cout<<str<<endl;
    reverse(str.begin()+0,str.begin()+(n));
    cout<<str<<endl;

}
