#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << " Enter a Character : ";
    cin>> ch;

    // int ascii = (int)ch;
    // if(ascii >= 97 && ascii <= 120){
    //     cout<< "The character is lower case alphabet";
    // }
    // if(ascii >= 65 && ascii <= 90){
    //     cout<< "The character is upper case alphabet";
    // }
    int ascii = (int)ch;
    if(ascii >= 97 && ascii <= 120 || ascii >= 65 && ascii <= 90){
        cout<< "The character is alphabet";
    }
    

}