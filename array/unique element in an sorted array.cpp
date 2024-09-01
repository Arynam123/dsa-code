#include<iostream>
#include<vector>
using namespace std;
int unique_element(vector <int>&arr){
    int i=1;
    int j=0;
    while(i<arr.size()){
        if(arr[i]==arr[j]){
            i++;
        }
        else{
            j++;
            arr[j]=arr[i];
            i++;
        }
    }
    return j+1;


}
int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int >arr;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr.push_back(data);
    }
    cout<<unique_element(arr);
}