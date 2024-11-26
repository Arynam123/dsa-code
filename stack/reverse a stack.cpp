#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    int top_e=s.top();
    s.pop();
    insertatbottom(s,element);
    s.push(top_e);
}
void reverse(stack<int>&s){
    if(s.empty()){
        return ;
    }
    int top_element=s.top();
    s.pop();
    reverse(s);
    s.push(top_element);
    //insertatbottom(s,top_element);
}
void print(stack<int>&s){
    while(!(s.empty())){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    stack <int>s;
    
    int n;
    cout<<"Enter the size of stack:"<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        s.push(data);
    }
    
    reverse(s);
    print(s);

}