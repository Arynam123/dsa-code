#include<iostream>
#include<stack>
using namespace std;
int findmiddle(stack<int> &s,int index, int size){
    int element;
    if(index==(size/2)){
        element=s.top();
        return element;
        s.pop();
    }
    element=s.top();
    s.pop();
    int findit=findmiddle(s,index+1,size);
    return findit;
    s.push(element);    
    
}
int main(){
    stack <int> s;
    int n;
    cout<<"Enter the size of stack: "<<endl;
    cin>>n;
    int index=0;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        s.push(data);
    }
    cout<<"The middle element in stack is"<<findmiddle(s,index,n)<<endl;

}