#include<iostream>
using namespace std;
bool palindrome(char arr[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        if(arr[i]!=arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    char arr[1000];

    cin>>arr;
    int size=0;
    while(arr[size]!='\0'){
        size++;
    }
    cout<<size<<endl;
    cout<<palindrome(arr,size);

}