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

    //sorting the array by bubble sort
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }

        }
    }

    //printing the sorted array
    cout<<"Your sorted array is: ";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    
}
