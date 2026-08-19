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
       while(temp !=  NULL){
        cout<<temp->data<<" ";
        temp = temp->next;}

    cout<<endl;

    int val;
    cout<<"Enter the Value : ";
    cin>>val;

    int k;
    cout<<"Enter the Kth element : ";
    cin>>k;

    if(head == NULL){
        if(k==1){
        Node*newNode = new Node;
        newNode->next=NULL;
        newNode->data=val;
        head = newNode;
    }
}
    else if(k==1){
        Node*newNode = new Node;
        newNode->data = val;
        newNode->next = head;

        head = newNode;
    }
    else{
        int count = 0;
        temp = head;
        while(temp != NULL){
            count++;

            if(count == k-1){
                Node*newNode = new Node;
                newNode->data=val;
                newNode->next=temp->next;
                temp->next=newNode;
                        }
            temp = temp->next;
        }
        temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    }
    
   
}