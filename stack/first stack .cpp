#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        int capacity=size;
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int data){
        if(top!=size-1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Bhaiya tanki bahar gaya hai"<<endl;
        }
    }
    void pop(){
        if(top!=-1){
            top--;
        }
    }
    void empty(){
        if(top==-1){
            cout<<"The stack is khali--"<<endl;
        }
        else{
            cout<<"Abhi maal baki hai"<<endl;
        }
    }
    void print(){
        while(top!=-1){
            cout<<arr[top]<<" ";
            top--;
        }
        cout<<endl;
    }

};

int main(){
    Stack s(6);
    s.push(700);
    s.push(600);
    s.push(500);
    s.push(400);
    s.push(300);
    s.push(200);
    s.push(100);
    s.pop();
    s.pop();
    s.empty();
    s.print();
    
}