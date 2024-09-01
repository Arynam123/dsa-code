#include<iostream>
using namespace std;
int first_occurance(int arr[],int low,int high,int k){
    
    int mid;
    int ans=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==k){
            ans=mid;
            
            high=mid-1;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    return mid;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target: "<<endl;
    cin>>target;
    cout<<first_occurance(arr,0,n-1,target);

}