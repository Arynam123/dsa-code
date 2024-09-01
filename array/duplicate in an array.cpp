#include<iostream>
#include<vector>
using namespace std;

int duplicate(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        int dup=0;
        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j]){
                dup++;
            }
            if(dup>=2){
                return arr[i];
            }
        }
    }
    return -1;
    
    
}

//postioning method
int duplicate(vector<int> &arr){
    while(arr[0]!=arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];

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
    cout<<duplicate(arr);

}