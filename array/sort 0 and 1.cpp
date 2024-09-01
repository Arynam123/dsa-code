#include<iostream>
using namespace std;
void sort(int arr[],int size){
    int zeros=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeros++;
        }
    }

    fill(arr,arr+zeros,0);
    fill(arr+zeros,arr+size,1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);

}