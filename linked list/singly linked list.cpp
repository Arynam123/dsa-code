#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    void showvalues(){
        cout<<data<<endl;
    }    
};
int main(){
    Node *first=new Node();
    first->data=10;
    first->next=NULL;
    first->showvalues();
}
