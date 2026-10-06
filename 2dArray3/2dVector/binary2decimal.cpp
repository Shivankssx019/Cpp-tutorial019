#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = { 1 , 1 , 0  , 0 , 1};
    int x=1;
    int sum = 0;
    for(int i=4;i>=0;i--){
        sum += arr[i]*x;
        x *= 2;
    }
    cout<<sum;
}