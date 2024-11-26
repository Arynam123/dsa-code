#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int data){
    if(s.empty()){
        //insert data
        s.push(data);
        return ;

    }
    int top_element=s.top();
    s.pop();
    insertatbottom(s,data);
    s.push(top_element);
    
}
int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    insertatbottom(s,13);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
        
    }
}
//top element ko print ane ke liye niche ana padta hai
//niche ane ke liye pop use hota hai
// yye baat hamssha yaad rakhana
