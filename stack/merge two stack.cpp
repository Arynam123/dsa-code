#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top1;
    int top2;
    int *arr;

    Stack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top1=-1;
        top2=size;
    }
    void push1(int data){
        if(top2-top1==1){
            cout<<"Stack overflow"<<endl;
        }
        else{
            top1++;
            arr[top1]=data;
        }

    }
    void push2(int data){
        if(top2-top1==1){
            cout<<"Stack overflow"<<endl;
        }
        else{
            top2--;
            arr[top2]=data;
        }
        
    }
    void pop1(){
        if(top1!=-1){
            arr[top1]=0;
            top1--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    void pop2(){
        if(top2!=size){
            arr[top2]=0;
            top2++;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    void print(){
        cout<<"top1: "<<top1<<endl;
        cout<<"top2: "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Stack s(6);
    s.push1(10);
    s.print();
}
