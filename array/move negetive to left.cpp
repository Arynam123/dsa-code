#include<iostream>
#include<vector>
using namespace std;
void move_negetive_to_left(vector<int> &arr){
    int pos=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            swap(arr[i],arr[pos]);
            pos++;
        }
        
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr.push_back(data);
    }
    move_negetive_to_left(arr);
}
