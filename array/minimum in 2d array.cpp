#include<iostream>
#include<vector>
using namespace std;
int return_minimum(vector<vector<int>> arr){
    int mini=INT16_MAX;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}
int main(){
    //creating 2d array using vector
    vector<vector<int>> arr (4,vector<int>(3));
    //size of row
    int row=arr.size();
    //size of col
    int col=arr[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter value at ("<<i<<" "<<j<<")";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"The minimum value in the array is:"<<return_minimum(arr);

}