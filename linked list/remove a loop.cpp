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
        if(fast==slow){
            return true;
        }
    }
    return false;
}
Node* removeloop(Node* head){
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;

        }
        if(fast==slow){
            break;
        }
    }
    slow=head;//Mistake : yahan mujhe lag raha tha tha ki head ki value change ho gayi par
    //slow pointer move kar raha tha head wahi par hai

    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    Node* starting=slow;
    Node* temp=starting;
    while(temp->next!=starting){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;//kyoki head hi starting pointer hai linked list ka


}
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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
    removeloop(head);
    printList(head);

    return 0;
}
