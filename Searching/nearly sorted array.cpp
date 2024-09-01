#include<iostream>
#include<vector>
using namespace std;
int NearlysortedArray(vector<int> &arr,int k){
    int low=0;
    int n=arr.size();
    int high=n-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if((mid-1>=0) && (mid+1<n)){
            if(arr[mid]==k){
                return mid;
            }
            if(arr[mid-1]==k){
                return mid-1;
            }
            if(arr[mid+1]==k){
                return mid+1;
            }
            else if(arr[mid]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }   
        }
    }
    return -1;
}
int main(){
    vector<int> v;
    v={10,3,20,40,50,80,70};
    cout<<"Index of the target is :"<<NearlysortedArray(v,80);

}