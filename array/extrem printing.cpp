#include<iostream>
using namespace std;
int main(){
    int arr[6]={10,20,30,40,50,60};
    for(int i=0;i<6;i++){
        if(i%2==0){
            cout<<arr[i];
        }
        else{
            cout<<arr[6-i-1];
        }
    }
}