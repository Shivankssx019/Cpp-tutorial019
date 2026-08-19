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

    int el;
    cout<<"Enter the element : ";
    cin>>el;
        temp = head;
    if(el == 1){
        head=head->next;
        delete temp;

    
    temp = head;
       while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;}

    cout<<endl;
}

    temp = head;
    Node*prev = NULL;
    while(temp != NULL){
        if(temp->data == el){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    temp = head;
       while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;}

    cout<<endl;

}