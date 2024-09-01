#include<iostream>
using namespace std;
int peakelement(int arr[],int size){
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(mid-1>=0 && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        if(mid+1<size && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[low]>=arr[mid]){
            high=mid-1;

        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[6]={4,5,6,7,1,2,3};
    cout<<peakelement(arr,6);
}