#include<iostream>
using namespace std;
#include<vector>
class Node{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int value){
        this->value=value;
        left=NULL;
        right=NULL;
    }
    
};
Node* createTree(){
        cout<<"Enter the value of Node: "<<endl;
        int value;
        cin>>value;
        if(value==-1){
            return NULL;
        }
        else{
            Node* root=new Node(value);
            cout<<"adding left child for "<<value<<endl;
            root->left=createTree();
            cout<<"adding right child for "<<value<<endl;
            root->right=createTree();
            return root;
        }
    }`
   
int main(){
    Node *root;
    root = createTree();
    cout<<"printing root"<<root->value<<endl;


}