//reverse it 
// add 1 to it and check for carry 
// again reverse it

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printll(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}
Node* addingone(Node* head){
    int carry=1;
    Node* temp=head;
    while(temp->next!=NULL){
        int totalsum=temp->data+carry;
        int digit=totalsum%10;
        int carry=totalsum/10;
        if(carry==0){
            break;
        }
        
    }
    if(carry!=0){
        int totalsum=temp->data+carry;
        int digit=totalsum%10;
        int carry=totalsum/10;
        if(carry!=0){
            Node* newnode=new Node(carry);
            temp->next=newnode;
            newnode->next=NULL;
        }
    }
    return head;
}
