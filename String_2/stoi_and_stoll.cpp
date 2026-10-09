#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "12344566";
    int x = stoi(str);
    cout<<x;

    //stoll
    string st ="123456789012345678";
    long long  y = stoll(st);
    cout<<y;

}