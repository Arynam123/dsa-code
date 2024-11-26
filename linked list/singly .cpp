#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;//this is a pointer //node data type wala
    Node(){
        //cout<<"This is default constructor"<<endl;
        this->next=NULL;
    }
    Node(int data){
        //cout<<"This is paramerized constructor"<<endl;
        this->data=data;
        this->next=NULL;
    }

};
void print(Node* head){
        int length=0;
        Node* temp=head;//yahan par bahut bache galti karte hai actual node ko nahi chedna hai

        while(temp!=NULL){
            length++;
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        // cout<<"length of linked list is :"<<length;
    }
int getlength(Node* head){
    int length=0;
    Node* temp=head;
    while(temp!=nullptr){
        length++;
        temp=temp->next;
    }
    return length;
}    
//insertion in linked list at beginning
void insertathead(int data,Node* &head,Node* &tail){
    if(head==nullptr && tail==nullptr){
        //create a new node
        Node* newnode= new Node(data);
        head=newnode;


    }
    else{
        Node* newnode= new Node(data);
        newnode->next=head;
        head=newnode;
    }

}
void insertattail(int data,Node* &head,Node* &tail){
    if(head==nullptr && tail==NULL){
        //create a node
        Node* newnode= new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        Node* newnode= new Node(data);
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        tail=temp;
        tail->next=newnode;
        tail=newnode;
        
    }
}

void insertatspecificposition(int data, int position, Node* &head, Node* &tail){
    int length=getlength(head);
    Node* newnode=new Node(data);
    if(position<1){
        cout<<"cant insert invalid position";
    }
    if(position==1){
        //insert at head;
        insertathead(data,head,tail);
    }
    if(position>length){
        //insert at tail;
        insertattail(data,head,tail);
    }
    
    else{
        Node* prev=nullptr;
        Node* curr=head;
        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;

        }
        prev->next=newnode;
        newnode->next=curr;
    }
}
void deletion(int position,Node* &head, Node* &tail){
    if(head==nullptr){
        cout<<"Bhai linked list empty hai!!"<<endl;
    }
    int length=getlength(head);
    if(position>length){
        cout<<"Bhai ye kidhar aa gaye app Invalild position index out of bound!!";

    }
    if(head==tail){
        Node* temp=head;
        delete tail;//as we are passing by reference tab galti ho sakta hai
        //so please make a copy of it
        head=nullptr;
        tail=nullptr;
        return;
        
    }
    if(position==1){
        //delete at head
        Node* temp=head;
        head=head->next;
        temp->next=nullptr;
        delete temp;
        return;
    }
    if(position==length){
        //delete at tail
        Node* prev=head;
        while(prev->next!=tail){//give the position of 2nd last element while(prev->next->next!=nullptr)
            prev=prev->next;

        }
        prev->next=NULL;
        delete tail;
        tail=prev;
        
    }
    else{
        Node* prev=nullptr;
        Node* curr=head;
        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
        }
        prev->next=curr->next;

        //MISTAKE NULL RAHEGA TABHI OO DELETE HOGA 
        curr->next=nullptr;
        delete curr;
    }
}
Node* reverse(Node* head){
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
void addingone(Node* &head){
    head=reverse(head);
    int carry=1;
    Node* temp=head;
    while(temp->next!=NULL){
        int totalsum=temp->data+carry;
        int digit=totalsum%10;
        carry=totalsum/10;
        temp->data=digit;
        temp=temp->next;
        if(carry==0){
            break;
        }
        
    }
    if(carry!=0){
        int totalsum=temp->data+carry;
        int digit=totalsum%10;
        carry=totalsum/10;
        temp->data=digit;
        
        if(carry!=0){
            Node* newnode=new Node(carry);
            temp->next=newnode;
            newnode->next=NULL;
        }
    }
    head=reverse(head);
}

int main(){
    //Node newnode=new Node();//this is static memory allocation
    Node* head=nullptr;
    Node* tail=nullptr;
   
    insertathead(9,head,tail) ;
    insertathead(9,head,tail) ;
    insertathead(9,head,tail) ;
    // insertattail(90,head,tail) ;
    // insertattail(80,head,tail) ;
    // insertattail(70,head,tail) ;
    //insertatspecificposition(55,7,head,tail);
    //insertatspecificposition(55,1,head,tail);
    // insertatspecificposition(55,4,head,tail);
    print(head);
    // deletion(5,head,tail);
    // print(head);
    // deletion(9,head,tail);
    // print(head);
    // deletion(1,head,tail);
    // print(head);
    // deletion(7,head,tail);
    // print(head);
    // head=reverse(head);
    // print(head);
    addingone(head);
    print(head);

}