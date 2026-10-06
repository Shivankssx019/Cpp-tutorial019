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

    int k;
    cout<<"Enter the kth element : ";
    cin>>k;
    if(head == nullptr || head -> next == nullptr)
    cout<<head;
    if(k == 1){
        Node*temp=head; 
        head=head->next;
        delete temp;
    

    temp = head;
       while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;}

    cout<<endl;
    }

    int count = 0;
    Node*prev = 0;
    temp = head;
    while(temp != nullptr){
        count++;

    if(count == k){
        prev->next = prev->next->next;
        delete temp;
        break;
    }
    prev = temp ;
    temp = temp->next;


}
temp = head;
       while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;}

    cout<<endl;
       }