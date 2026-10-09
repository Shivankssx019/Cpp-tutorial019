#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str = "SHIVANK";
    // str.push_back(' ');
    // str.push_back('M');
    // str.push_back('A');

    // str.push_back('U');
    // cout<<str;

    // string str = "Shivank";
    // str.pop_back();
    // str.pop_back();
    // cout<<str;

    // string s = "Shivank";
    // string t = "Maurya";
    // s = s + "NINJA";
    // cout<<s;

    string str = "abcdef";
    // reverse(str.begin(),str.end());
    cout<<str;
    cout<<endl;

    // reverse(str.begin()+2,str.end()-1);
    reverse(str.begin()+2,str.begin()+5);
    cout<<str;
    cout<<endl;
}