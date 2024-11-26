#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->prev=NULL;
        this->next=NULL;

    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void printDLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
     
}
int getlength(Node* head){
    Node* temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;

}
void insertathead(int data, Node* &head, Node* &tail){
    //if linked list is empty
    if(head==NULL && tail==NULL){
        Node* newnode=new Node(data);//new node is created
        head=newnode;
        tail=newnode;

    }
    else{
        Node* newnode=new Node(data);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;

    }
}
void insertattail(int data, Node* &head, Node* &tail){
    
    if (head==NULL && tail==NULL){
        //create a new node
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        Node* temp=head;
        Node* newnode=new Node(data);
        while(temp->next!=NULL){
            temp=temp->next;
        }    
        //give the position of the tail
        tail=temp;
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode; 
    }  
}
void insertatspecificposition(int data, Node* &head, Node* &tail,int position){
    int length=getlength(head);
    if(head==NULL && tail==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else if(position==1){
        //insertion is at head
        insertathead(data,head,tail);
    }
    else if(position==(length+1)){
        //insert at tail
        insertattail(data,head,tail);
    }
    else if(position<1 || position>length+1){
        //not possible
        cout<<"Bhai ye kahan aa gaye app INVALID POSITION"<<endl;
    }
    else{
        Node* newnode=new Node(data);
        Node* prevnode=NULL;
        Node* currnode=head;
        while(position!=1){
            prevnode=currnode;
            currnode=currnode->next;
            position--;
        }
        prevnode->next=newnode;
        newnode->prev=prevnode;
        newnode->next=currnode;
        currnode->prev=newnode;
        
    }
    
}
void deletion(Node* &head, Node* &tail, int position){
    int length=getlength(head);
    if(head==NULL && tail==NULL){
        cout<<"Linked list is already empty";
    }
    else if(position==1){
        //delete at head;
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }
    
    else if(position==length){
        Node* prevnode=head;
        while(prevnode->next!=tail){//while (prevnode->next->next!=NULL) == (prev->next!=tail)
        //(prevnode->next!=tail) is pointing towards 2nd last element
            prevnode=prevnode->next;

        }
        tail->prev=NULL;
        prevnode->next=NULL;
        delete tail;
        //yahan par me galti karti hu
        //new tail define karna hoga //pointer always needed
        tail=prevnode;
    }
    else if(position>length){
        cout<<"Bhaiya kahan aa gaye app INVALID INDEX"<<endl;
    }
    else{
        Node* prevnode=NULL;
        Node* currnode=head;
        while(position!=1){
            prevnode=currnode;
            currnode=currnode->next;
            //yahan pe galti karte hai
            position--;
        }
        prevnode->next=currnode->next;
        currnode->next->prev=prevnode;
        currnode->prev=NULL;
        currnode->next=NULL;
        delete currnode;
    }
}
int main(){
    //Node newnode=new Node();
    Node* head=NULL;
    Node* tail=NULL;
    insertathead(10,head,tail);
    insertathead(20,head,tail);
    insertathead(30,head,tail);
    insertattail(40,head,tail);
    insertattail(50,head,tail);
    insertattail(60,head,tail);
    // printDLL(head);
    insertatspecificposition(5,head,tail,1);
    insertatspecificposition(70,head,tail,8);
    insertatspecificposition(35,head,tail,5);
    printDLL(head);
    deletion(head,tail,1);
    printDLL(head);
    deletion(head,tail,8);
    printDLL(head); 
    deletion(head,tail,4);
    printDLL(head);   
}