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

        //Remove tail
        temp = head;  
        if(head == nullptr || head->next == nullptr) cout<< head;

        while(temp->next->next !=nullptr){
            temp = temp -> next;
        }
        delete temp->next;
        temp -> next = nullptr;

        temp = head;

        while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

       }
         


