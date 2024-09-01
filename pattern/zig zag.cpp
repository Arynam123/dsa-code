#include<iostream>
using namespace std;
void row_wise_printing(int arr[3][4]){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void column_wise_printing(int arr[3][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}


void printWaveForm(int arr[][4], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            // Top to Bottom
            for (int i = 0; i < rows; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            // Bottom to Top
            for (int i = rows - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int arr[3][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12}};
    row_wise_printing(arr);
    column_wise_printing(arr);
    printWaveForm(arr,3,4);

}