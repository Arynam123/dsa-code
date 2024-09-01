#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int missing(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=i){
            return i;
        }
    }
    return n;
}
int missing1(int &arr[],int n){
    int sum_no=0;
    int sum_array=0;
    int sum_no=n(0+n)/2;
    int sum_array=accumulate(arr,arr+n,0);
    return sum_no-sum_array;
}

int main(){
    int arr[5]={0,1,2,3,4};
    cout<<missing(arr,5);
    cout<<missing1(arr,5);
}
