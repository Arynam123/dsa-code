#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,0,0,1,0,1};
    int c_zero=0;
    for(int i=0;i<6;i++){
        if(arr[i]==0){
            c_zero++;
        }

    }
    int temp0[c_zero];
    for(int i=0;i<c_zero;i++){
        temp0[i]=arr[i]
    }
}