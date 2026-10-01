#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node*back;

    Node(int data1 ,Node*next1,Node*back1){
        data = data1;
        next =  next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = NULL;
        back = NULL;
    }
};

int main(){
    vector<int>arr = {2,4,5,6,7};

    Node*head = new Node(arr[0]);
    Node*prev = head;

    for(int i = 1; i < arr.size();i++){
        Node*temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = prev->next;
    }
    cout<<head->data<<endl;

    Node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}