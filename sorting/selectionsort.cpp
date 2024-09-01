#include<iostream>
using namespace std;
int main(){
    ///taking size and input in an array
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(auto i=0;i<n;i++){
        cin>>arr[i];

    }
    //printing the array 
    cout<<"Your entered array is";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
//sorting by selection sort
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i;j<n-1;j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }

        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;   
    }
    
    //printing the sorted array
    cout<<"Your sorted array is: ";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    
}

