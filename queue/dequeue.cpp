#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_back(80);
    dq.push_back(90);
    cout<<"front:"<<dq.front()<<endl;
    cout<<"back:"<<dq.back()<<endl;
    dq.pop_front();
    dq.pop_back();
    cout<<"front:"<<dq.front()<<endl;
    cout<<"back:"<<dq.back()<<endl;

    

}