#include<iostream>
using namespace std;
void rotate_Array(int arr[],int n,int k){
    int r=k%n;
    int temp[r];
    for(int i=0;i<r;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-r;i++){
        arr[i]=arr[n-1-r+i];
    }
    for(int i=0;i<r;i++){
        arr[r+1+i]=temp[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int k;
    cout<<"Enter the number of right rotation: ";
    cin>>k;
    
    rotate_Array(arr,n,k);

}