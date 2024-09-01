#include<iostream>
using namespace std;
int last_occurance(int arr[],int low,int high,int k){
    int ans=-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==k){
            ans=mid;//store ho gaya ab left side check hoga 
            low=mid+1;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        else{
            low=mid-1;
        }  
    }
    return ans+1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    cout<<"The last occurance is :"<<last_occurance(arr,0,n-1,target);
}