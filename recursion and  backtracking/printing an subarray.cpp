// #include<iostream>
// #include<vector>

// using namespace std;
// //printing an array recursively
// void printArray(vector<int> &arr,int start,int end){
//     //base case
//     if(end==arr.size()){
//         return ;
//     }
//     for(int start=0;start<=end;start++){
//         cout<<arr[start]<<" ";
//     }
//     cout<<endl;
//     //recursion
//     printArray(arr,start,end+1);

// }

// //printing subarray
// void printSubarray(vector<int> &arr){
//     for(int start=0;start<arr.size();start++){
//         int end=start;
//         printArray(arr,start,end);
//     }
// }
// int main(){
//     vector <int> a={1,2,3,4,5};
//     //printArray(a,0,0);
//     printSubarray(a);
// }
#include <iostream>
#include <vector>

using namespace std;

// Printing an array recursively
void printArray(vector<int> &arr, int start, int end) {
    // Base case
    if (end == arr.size()) {
        return;
    }
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Recursion
    printArray(arr, start, end + 1);
}

// Printing subarrays
void printSubarray(vector<int> &arr) {
    for (int start = 0; start < arr.size(); start++) {
        int end = start;
        printArray(arr, start, end);
    }
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    printSubarray(a);
    return 0;
}
