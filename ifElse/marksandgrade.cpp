#include<iostream>
using namespace std;
int main(){
    float marks;
    cout << "Enter the Marks : ";
    cin >> marks;
    if(marks > 90){
        cout << "EXCELLENT";
    }
    else if (marks > 80){
        cout << "VERY GOOD";
    }
    else if(marks > 70){
        cout << "Good";
    }
    else if(marks > 60){
        cout << "You  can do Better";
    }
    else if(marks > 50){
        cout << "Improve Yourself";
    }
    else if(marks > 40){
        cout << "Disappointment";
    }
    else{
        cout << "Fail";
    }
}