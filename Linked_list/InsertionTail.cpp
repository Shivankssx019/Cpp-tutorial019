#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node*next;
};
int main(){
    Node*head = new Node;
    Node*second = new Node;
    Node*third = new Node;
    Node*fourth = new Node;
    Node*fifth = new Node;

    head -> data = 1;
    second -> data = 4;
      third -> data = 5;
       fourth -> data = 7;
       fifth -> data = 3;

       head -> next = second;
      second -> next = third;
      third -> next = fourth;
       fourth -> next = fifth;
       fifth -> next = nullptr;
       
       Node*temp = head;
       while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;}

    cout<<endl;

    int val;
    cout<<"Enter the Value : ";
    cin>>val;
         
        if(head == NULL){
          Node* newNode = new Node;
          newNode->data = val;
          newNode->next = NULL;
          head = newNode;
        }

        else{

        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        Node*newNode = new Node;
        newNode->data=val;
        newNode->next=NULL;

        temp->next = newNode;}

        temp = head;
       while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;}

    cout<<endl;
}
