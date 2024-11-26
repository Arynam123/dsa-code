#include<iostream>
#include<queue>
using namespace std;
void reverse_using_recusion(queue<int>&q){
    if(q.empty()){
        return;
    }
    int front_ele=q.front();
    q.pop();
    reverse_using_recusion(q);
    q.push(front_ele);
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    reverse_using_recusion(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

}
