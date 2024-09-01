#include<iostream>
#include<vector>
using namespace std;
void row_col_zero(vector<vector<int>> &arr){
    //finding zero
    vector<int>temp(2);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            if(arr[i][j]==0){
                temp[0]=i;
                temp[1]=j;
                break;
            }      
        }
    }
    
    int r=temp[0];
    int c=temp[1];
    for(int i=0;i<arr.size();i++){
        arr[r][i]=0;
    }
    for(int j=0;j<arr[0].size();j++){
        arr[j][c]=0;
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
   
    int row,col;
    cout<<"Enter rows and column size: ";
    cin>>row;
    cin>>col;
     vector<vector<int>> arr(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter value: ";
            cin>>arr[i][j];
        }
    }
    row_col_zero(arr);
}

// #include <iostream>
// #include <vector>

// using namespace std;

// void row_col_zero(vector<vector<int>>& arr) {
//     vector<int> temp(2);

//     for (int i = 0; i < arr.size(); i++) {
//         for (int j = 0; j < arr[0].size(); j++) {
//             if (arr[i][j] == 0) {
//                 temp[0] = i;
//                 temp[1] = j;
//             }
//         }
//     }

//     int r = temp[0];
//     int c = temp[1];

//     for (int i = 0; i < arr.size(); i++) {
//         arr[r][i] = 0;
//     }
//     for (int j = 0; j < arr[0].size(); j++) {
//         arr[j][c] = 0;
//     }

//     for (int i = 0; i < arr.size(); i++) {
//         for (int j = 0; j < arr[0].size(); j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int row, col;
//     cout << "Enter rows and column size: ";
//     cin >> row >> col;

//     vector<vector<int>> arr(row, vector<int>(col));
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cout << "Enter value: ";
//             cin >> arr[i][j];
//         }
//     }

//     row_col_zero(arr);

//     return 0;
// }