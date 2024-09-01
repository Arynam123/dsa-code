#include<iostream>
#include<vector>
using namespace std;
void spiral_printing(vector<vector<int>> &matrix){
    vector <int> ans;
    int rows=matrix.size();
    int cols=matrix[0].size();
    int starting_row=0;
    int starting_col=0;
    int ending_row=rows-1;
    int ending_column=cols-1;
    int total=rows*cols;
    int count=0;
    while(total>count){
        //printing starting row
        for(int i=starting_col;i<=ending_column && total>count;i++ ){
            ans.push_back(matrix[starting_row][i]);
            //increase the count so that is do not exceed total element
            count++;  
        }
        //updating row so that it start from there only

        starting_row++;
        //printing last column
        for(int i=starting_row;i<=ending_row && total>count;i++){
            ans.push_back(matrix[i][ending_column]);
            count++;
            
        }
        ending_column--;
        //printing for last row;
        for(int i=ending_column;i>=starting_col && total>count;i--){
            ans.push_back(matrix[ending_row][i]);
            count++;
           
        }
         ending_row--; 
        //printing first column;
        for(int i=ending_row;i>=starting_row && total>count;i--){
            ans.push_back(matrix[i][starting_col]);
            count++;
        }
        starting_col++;
    }
    for(int i=0;i<count;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    vector<vector<int>> arr;
    arr={{1,2,3,4,5,6},
    {7,8,9,10,11,12},
    {13,14,15,16,17,18},
    {19,20,21,22,23,24},
    {25,26,27,28,29,30}};
    spiral_printing(arr);
}
