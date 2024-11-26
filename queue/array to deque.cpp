#include<iostream>
using namespace std;
class Dequeue{
    public:
    int data;
    int front;
    int rear;
    int size;
    int *arr;

    Dequeue(int size){
        this->size=size;
        arr=new int[size];  
        front=-1;
        rear=-1;       
    }
    void push_front(int data){
        if(front==0){
            cout<<"Overflow"<<endl;
        }
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[front]=data;
        }
        
        else{
            front--;
            arr[front]=data;
        }
    }
    void push_back(int data){
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
    void pop_front(){
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
    void pop_back(){
        if(front==-1 && rear==-1){
            cout<<"Underflow"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else{
            arr[rear]=-1;
            rear--;
        }

    }
    void getsize(){
        cout<<rear-front+1<<endl;
    }
    void print(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};
int main(){

    Dequeue dq(5);
    dq.push_front(10);
    
    dq.print(); //10
    dq.push_back(10);
    dq.print();//10 20
    dq.pop_front();
    dq.print();
    dq.pop_front();
    dq.pop_front();
    
   
}