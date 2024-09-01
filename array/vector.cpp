#include<iostream>
#include<vector>
using namespace std;
bool search2dvector(vector<vector<int>> arr,int target){
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;

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
    int k;
    cout<<"Enter the target :";
    cin>>k;
    bool ans= search2dvector(arr,k);
    cout<<"ans :"<<ans;
}
