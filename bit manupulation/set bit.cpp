#include<iostream>
using namespace std;
int main(){
    //input the number
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int setbit=0;
    while(n!=0){
        if(n & 1 == 1){
            setbit=setbit+1;
        }
        //right shift
        n=n>>1;
    }
    cout<<"Number of set bit: "<<setbit<<endl;
}