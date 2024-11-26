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
bool checkloop(Node* head){
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;

        }
        if(fast=slow){
            return true;
        }
    }
    return false;
}


int main() {
    // Creating nodes
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Creating a loop for testing (5th node points back to the 3rd node)
    head->next->next->next->next->next = head->next->next;

    // Check if the linked list has a loop
    if (checkloop(head)) {
        cout << "Loop found in the linked list." << endl;
    } else {
        cout << "No loop found in the linked list." << endl;
    }

    return 0;
}
