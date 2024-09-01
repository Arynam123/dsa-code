#include<iostream>
using namespace std;
void zig_zag(int arr[][4],int row){
    for(int col=0;col<4;col++){
        if(col%2==0){
            for(int r=0;r<row;r++){
                cout<<arr[r][col]<<" ";
            }
        }
        else{
            for(int r=row-1;r>=0;r--){
                cout<<arr[r][col]<<" ";
            }
        }
    }
}
int main(){
    int arr[3][4]={{1,2,3,4},
                  {5,6,7,8},
                   {9,10,11,12}};
    zig_zag(arr,3);
}