#include<iostream>
using namespace std;
class Cq{
    public:
    int data;
    int *arr;
    int front;
    int rear;
    int size;
    Cq(int size){
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
        else if(front!=0 && rear==size-1){
            rear=0;
            arr[rear]=data;
        }
        else if((front==0 && rear==size-1)||(rear==front-1)){
            cout<<"Overflow"<<endl;
        }
        else{
            rear++;
            arr[rear]=data;

        }
    }
    void pop(){
        if(front==rear){
            arr[front]=-1;
            front--;
        }
        else if(front==-1 && rear==-1){
            cout<<"Underflow"<<endl;
        }
        // else if(front>rear){
        //     arr[rear]=-1;
        //     rear++;
            
        // }
        else if(front==size-1){
            arr[front]=-1;
            front=0;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    void get_front(){
        if(front==-1){
            cout<<"Underflow"<<endl;
        }
        else{
            cout<<arr[front]<<endl;
        }
    }
     void get_back(){
        if(rear==-1){
            cout<<"Underflow"<<endl;
        }
        else{
            cout<<arr[rear]<<endl;
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Cq cq(5);
    cq.push(10);
    cq.print();
    cq.push(20);
    cq.print();
    cq.push(30);
    cq.print();
    cq.push(40);
    cq.print();
    cq.push(50);
    cq.print();
    
    cq.pop();
    cq.pop();
    cq.push(60);
    cq.push(70);
    cq.get_front();
    cq.get_back();
    cq.pop();
    cq.print();  
}