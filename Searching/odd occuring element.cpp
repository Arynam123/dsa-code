#include<iostream>
using namespace std;
int oddoccuring(int arr[],int size){
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(low==high){
            return arr[low];
        }
        if(arr[size-1]!=arr[size-2]){
            return arr[size-1];
        }
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1] && mid-1>=0 && mid+1<size){
            return mid;
        }
        if(arr[mid]==arr[mid+1] && mid+1<size){
            int pairindex;
            pairindex=mid;
            if(pairindex&1){      
                //left part me hai
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else if(arr[mid-1]==arr[mid] && mid-1>=0){
            int pairindex;
            pairindex=mid-1;
            if(pairindex&1){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1; 
}
int main(){
    int arr[11]={1,1,2,2,3,3,4,4,5,5,6};
    cout<<oddoccuring(arr,11);
}