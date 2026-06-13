#include<iostream>
using namespace std;
int main(){
    //Formula method
    // 1, 3 , 5 , 7 , 9 . ........
    int n;
    cout<<"Enter the Number : ";
    cin >> n;
    // for(int i = 1;i <= 2*n-1;i += 2){
    //     cout << i <<endl;
    // }

    //General method
    int a = 1;
    for(int i = 1;i<=n;i++){
        cout << a << endl; 
         a = a + 2;   
    }

}