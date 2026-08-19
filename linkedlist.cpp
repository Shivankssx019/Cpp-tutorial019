#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
};

Node* Convertarr2LL(vector<int>&arr){
    Node* head = new Node(arr[0],nullptr);
    Node*mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover -> next = temp;
        mover = mover -> next;
    }
    return head;
}

int main(){

    vector<int>arr = {1,2,3,4,5};
    Node*head = Convertarr2LL(arr);
    Node*temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        cout<<temp->next<<" "<<endl;

        temp = temp -> next;
    }
    


}



