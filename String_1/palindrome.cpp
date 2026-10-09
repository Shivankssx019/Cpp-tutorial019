#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);

   string rev = str ; 
   reverse(rev.begin(),rev.end());
   if(str == rev){
    cout<<"it is palindrome";
   }
   else
   cout<<"it is not palindrome";
}
