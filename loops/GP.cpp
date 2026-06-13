#include<iostream>
using namespace std ;
int main(){

    //gp :->  1,2,4,8,16..........
    int n;
    cout <<"Enter  the number : ";
    cin >> n;
    int a = 1; 
    for(int i = 1 ;i <= n;i++){
        cout <<a<<endl;
        a = a * 2;
        
    }
}