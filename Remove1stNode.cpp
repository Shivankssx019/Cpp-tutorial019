#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node*next;

    Node(int data1,Node*next1){
        data = data1;
       next = next1;
    
    }
};

Node*remove1stNode(Node*head){
    if(head == NULL)return head;
    Node*temp = head;
    head = head -> next;
    delete temp;
    return head;
}

int main(){
    vector<int>arr = {2,4,5,6,7};
    Node*head = new Node(arr[0],nullptr);
    Node*mover = head;
    for(int i = 1;i<arr.size();i++){
        Node*temp = new  Node(arr[i],nullptr);
        mover -> next = temp;
        mover = temp;
       
    }
     cout<<head -> data<<endl;
      Node*temp = head;
     while(temp){
        cout<<temp-> data<<" ";
        temp = temp -> next;}
        cout<<endl;


     head = remove1stNode(head);
     cout<<head->data<<endl;

     temp = head;
     while(temp != nullptr){
        cout<<temp-> data<<" ";
        temp = temp -> next;


     }

     





}

