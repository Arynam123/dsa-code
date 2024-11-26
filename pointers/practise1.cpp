#include<iostream>
using namespace std;
// void solve(int arr[],int size){
//     cout<<sizeof(arr)<<endl;
// }
// int main(){
//     int a=9;
//     int *ptr=&a;
//     cout<<"Size of pointer "<<sizeof(ptr);
//     int arr[]={10,20,30,40,50};
//     int size=5;
//     cout<<endl;
//     solve(arr,size);
// }

//stack memory and heap memory
int main(){
    // //stack memory
    // int a=9;
    // cout<<a<<endl;

    // //heap memory
    // int *p=new int;
    // *p=5;
    // cout<<*p<<endl;
    // //delallocate p
    // delete p;
    

    // //in an array
    // //stack
    // int arr[]={10,20,30};
    // cout<<arr[0]<<arr[1]<<arr[2]<<endl;

    // //heap memory
    // int *brr=new int[3];
    // *(brr+0)=10;
    // *(brr+1)=20;
    // *(brr+2)=30;
    // cout<<brr[0]<<brr[1]<<brr[2]<<endl;

    // //deallocate array
    // //delete []arr;



    //2d array in heap
    int **arr=new int *[4];//create 4 pointer
    for(int i=0;i<4;i++){
        arr[i]=new int[3];//create array of size 3 for each pointer

    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //deallocate memory
    for(int i=0;i<5;i++){
        delete []arr[i];
    }
}