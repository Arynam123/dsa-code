#include<iostream>
using namespace std;
class Queue{
    public:
    int data;
    int front;
    int rear;
    int *arr;
    int size;
    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push(int data){
        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=data;
        }
        else if(rear==size-1){
            cout<<"Overflow"<<endl;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void pop(){
        if(front==-1 && rear==-1){
            cout<<"Underflow"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;

        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    void getsize(){
        cout<<"size of the queue is:"<<rear-front+1<<endl;
    }
    void getfront(){
        if(front==-1){
            cout<<"underflow"<<endl;
        }
        else{
            cout<<arr[front]<<endl;
        }
    }
    void getback(){
        if(rear==-1){
            cout<<"underflow"<<endl;
        }
        else{
            cout<<arr[rear]<<endl;
        }
    }
    void print(){
        if(front==-1 && rear==-1){
            cout<<"queue is empty"<<endl;
        }
        else{
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    void isempty(){
        if(front==-1 && rear==-1){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            cout<<"Queue is not empty"<<endl;
        }
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();
}