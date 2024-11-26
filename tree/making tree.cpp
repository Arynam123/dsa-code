//tree is also like linked list 
//it have left and right node
#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    

    Node(int val) {
	  this->data = val;
	  left = NULL;
	  right = NULL;
	}
//creation of a node completed
};
//now createing a tree;
Node* createTree(){
    int value;
    //cout<<"Enter the value to the node :"<<endl;
    cin>>value;
    if(value==-1){
        //no value means passed the leaf node
        return NULL;
    }
    else{
        Node* root=new Node(value);
        //root me value daal diya ab sab recursion karega
        //cout<<"Enter value to the left tree: "<<endl;
        root->left=createTree();
        //cout<<"Enter value to the right tree: "<<endl;
        root->right=createTree();
        return root;
    }
}
//traversal of tree
//preorder NLR node left right
void preorder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    //for left
    preorder(root->left);
    preorder(root->right);

}
//inorder
void inorder(Node* root){
    if(root==NULL){
        return ;
    }
    //for left
    inorder(root->left);//l
    cout<<root->data<<" "; //n

    inorder(root->right);//r

}
void postorder(Node* root){
    if(root==NULL){
        return ;
    }
    //for left
    postorder(root->left);//l

    postorder(root->right);//r
    cout<<root->data<<" "; //n

}
//level order traversal //level sabke niklege
void levelOrderTraversal(Node* root){
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    bool flag=false;

    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front==NULL){
        //yahan par q.front nahi hai bas front hai 
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
       
        else{
            cout<<front->data<<" ";
        
            if(flag==true){
                  if(front->left!=NULL){
                q.push(front->left);
        }
            if(front->right!=NULL){
                q.push(front->right);
        }
            }

            else{
                if(flag==false){
                  if(front->right!=NULL){
                q.push(front->right);
        }
            if(front->left!=NULL){
                q.push(front->left);
        }
            }
        }
        flag=!flag;
        
    }
}
}

void Oppoiste_levelOrderTraversal(Node* root){
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front==NULL){
        //yahan par q.front nahi hai bas front hai 
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
       
        else{
            cout<<front->data<<" ";
        
            if(front->right!=NULL){
                q.push(front->right);
        }
            if(front->left!=NULL){
                q.push(front->left);
        }
        }
        
    }
}

void ZigZag_levelOrderTraversal(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL); // Level delimiter
    bool flag = true; // This is your left-to-right indicator

    while (!q.empty()) {
        Node* front = q.front();
        q.pop();

        if (front == NULL) {
            // End of the current level
            cout << endl;
            flag = !flag; // Toggle the direction for the next level

            if (!q.empty()) {
                q.push(NULL); // Add level delimiter for the next level
            }
        } else {
            cout << front->data << " ";

            // Enqueue children based on the current direction
            if (flag == false) { // left to right
                if (front->left != NULL) q.push(front->left);
                if (front->right != NULL) q.push(front->right);
            } else { // right to left
                if (front->right != NULL) q.push(front->right);
                if (front->left != NULL) q.push(front->left);
            }
        }
    }
}

 

int main() {
	Node* root;
	root = createTree();
    //inorder(root);
    cout<<endl;
	// 10 50 40 -1 -1 -1 30 20 -1 -1 -1
    //10 20 40 -1 -1 -1 30 60 50 100 -1 200 -1
    	//levelorder traversal ->
	//10
	//50 30
	//40 20
	//levelOrderTraversal(root);
    //oOppoiste_levelOrderTraversal(root);
    //ZigZag_levelOrderTraversal(root);
    ZigZag_levelOrderTraversal(root);

	//cout << "printing root" << root->data << endl;

  return 0;
}