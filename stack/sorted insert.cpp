#include<iostream>
#include<stack>
using namespace std;
void sortedinsert(stack<int>&s,int e){
    //very important stack should not be empty then only check top
    if(!s.empty() && e>s.top()){
        s.push(e);
        return;
    }
    int top_e=s.top();
    s.pop();
    if(e<top_e){
        //phir se recursion
        sortedinsert(s,e);
    }
    s.push(top_e);
}
void print(stack<int>&s){
    while(!(s.empty())){
        cout<<s.top()<< " ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    stack<int>s;
    int n;
    cout<<"Enter the size of stack:"<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        s.push(data);

    }
    sortedinsert(s,23);
    print(s);    
}