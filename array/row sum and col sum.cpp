#include<iostream>
#include<vector>
using namespace std;
void rowsum(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        int row_sum=0;
        for(int j=0;j<arr[0].size();j++){
            row_sum=row_sum+arr[i][j];

        }
        cout<<"Sum of row "<<i<<"is "<<row_sum<<endl;

    }
}
void colsum(vector<vector<int>> arr){
    for(int i=0;i<arr[0].size();i++){
        int col_sum=0;
        for(int j=0;j<arr.size();j++){
            col_sum=col_sum+arr[i][j];

        }
        
        cout<<"Sum of col"<<i<<"is "<<col_sum<<endl;

    }
}
int main(){
    vector<vector<int >> arr (4,vector<int>(3));
    //taking input in an array
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<"Enter the value at ("<<i<<" "<<j<<")";
            cin>>arr[i][j];
            
        }
        cout<<endl;
    }
    rowsum(arr);
    colsum(arr);
}