#include<iostream>
using namespace std;
int second_largest(int arr[],int size){
    int largest=INT8_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int second=-1;
    for(int i=0;i<size;i++){
        if((arr[i]<largest)  && arr[i]>second){
            second=arr[i];
        }
    }
    return second;
}
int main(){

    int arr[6]={9,23,4,1,0,21};
    cout<<"Second largest element in array"<<second_largest(arr,6);

}