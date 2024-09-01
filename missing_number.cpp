#include<iostream>
using namespace std;
int missing_number(int arr[],int size){
    
    for(int i=0;i<size;i++){
        if(arr[i]!=i){
            return i;
        
        }
       
    }
    return size;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter element from 0 to "<<n<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<missing_number(arr,n);
}