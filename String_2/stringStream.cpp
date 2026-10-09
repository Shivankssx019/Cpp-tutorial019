#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str = "This Is Shivank";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }

}