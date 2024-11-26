#include<iostream>
using namespace std;
#include<stack>
#include<queue>
void revereseKgroup(queue<int> &q,int count,int k){
    if(count>=k){
        //reverse hoga
        stack <int> st;
        for(int i=0;i<k;i++){
            int element=q.front();
            st.push(element);
            q.pop();
        }
        for(int i=0;i<k;i++){
            q.push(st.top());
            st.pop();
        }
        //ab sab recursion karga
        revereseKgroup(q,count-k,k);

    }
    else{
        for(int i=0;i<count;i++){
            int element=q.front();
            q.push(element);
            q.pop();
        }
    }
}
int main(){
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    revereseKgroup(q,q.size(),3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
}