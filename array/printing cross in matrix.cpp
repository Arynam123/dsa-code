#include<iostream>
#include<vector>
using namespace std;
void printing_cross(vector<vector<int>> arr){
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j || abs(j-i)==(row-1)){
                cout<<arr[i][j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void transpose(vector<vector<int>> arr){
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;i++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    //printing
}
int main(){
    vector<vector<int >> arr (3,vector<int>(3));
    //taking input in an array
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<"Enter the value at ("<<i<<" "<<j<<")";
            cin>>arr[i][j];     
        }
        cout<<endl;
    }

    printing_cross(arr);
}