#include<iostream>
using namespace std;
int main(){
    cout<< "Enter a Number: ";
    int n;
    cin >> n;

    if(n < 0){
        cout <<"The absolute number of " << n <<" is " <<-n;
    }
    else{
        cout<<"The absolute number is " << n;
    }

}