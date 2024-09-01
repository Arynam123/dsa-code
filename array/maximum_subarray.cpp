#include<iostream>
using namespace std;
int maximum_subarray(int arr[],int size,int k){
    if(k>size){
        return -1;
    }
    int result=INT8_MIN;
    int i=0;
    while((k-1)<size){
        int sum=0;
        
        for(int y=i;y<k;y++){
            sum=sum+arr[y];
        }
        if(sum>result){
            result=sum;
        }
        i++;
        k=k+1;
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k";
    cin>>k;
    cout<<maximum_subarray(arr,n,k);
}
    
