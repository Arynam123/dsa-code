#include<iostream>
using namespace std;
int sumRight_sumLeft(int arr[],int size){
    int mid=0;
    
    while(mid<size){
        int sumR=0;
        int sumL=0;
        for(int i=0;i<mid;i++){
            sumR=sumR+arr[i];
        }
        for(int j=mid+1;j<size;j++){
            sumL=sumL+arr[j];
        }
        if(sumR==sumL){
            return mid;
        }
        mid++;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumRight_sumLeft(arr,n);
}