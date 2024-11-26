#include<iostream>
using namespace std;
class Queue{
    public:
    int data;
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        this->size=size;
        arr= new int[size];
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
        //pop hamesha front se hota hai
        if(front==-1 && rear==-1){
            cout<<"Underflow"<<endl;
        }
        else if(front==rear){
            //first element
            arr[front]=-1;
            front=-1;
            rear=-1;
           
        }
        else{
            
            arr[front]=-1;
            front++;
          
        }
    }
    void isempty(){
        if(front==-1 && rear==-1){
            cout<<"Queue is empty"<<endl;
        }

    }
    void getsize(){
        cout<<"Size of the queue is:"<<rear-front+1;
    }
    void getfront(){
        if(front==-1){
            cout<<"Queue is empty: "<<endl;
        }
        else{
            cout<<arr[front]<<endl;
        }
    }
    void getback(){
        if(rear==-1){
            cout<<"Queue is full"<<endl;
        }
        else{
            cout<<arr[rear]<<endl;
        }
    }
    void print(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<endl;
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    q.pop();
    q.print();
    q.getsize();
    cout<<endl;
    q.getback();
    
}