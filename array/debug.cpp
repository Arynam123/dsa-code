#include<iostream>
using namespace std; 
bool twoD_arraytarget(int arr[][4] , int row,int col,int target){
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
  int row,col;
  cout<<"Enter the number of rows: ";
  cin>>row;
  int arr[row][4];
  for(int i=0;i<row;i++){
    for(int j=0;j<4;j++){
      cout<<"Enter the value at ("<<i<<" "<<j<<" )";
      cin>>arr[i][j];
    }
    cout<<endl;
  }
  cout<<"Enter the target: ";
  int target;
  cin>>target;
  cout<<twoD_arraytarget(arr,row,col,target);


}