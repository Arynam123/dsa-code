#include<iostream>
using namespace std;
bool palindrome(string s,int i){
    int n=s.length();
    //base cond. ie the terminating condition
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-1-i]){
        return false;

    }
    
    return palindrome(s,i+1);
}
//REVERSE THE ARRAY
void reverse(int arr[],int n,int i){
    if(i>=n/2){
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    reverse(arr,n,i+1);

}
int fibonacci(int n){
    //BASE CONDITION
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-2)+fibonacci(n-1);

}
int main(){
    cout<<"Enter the string"<<endl;
    string s;
    cin>>s;
    cout<<palindrome(s,0);
    cout<<endl;
    cout<<fibonacci(7);
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    reverse(arr,n,0);
    for(int i=0;i<=n;i++ ){
        cout<<arr[i]<<" ";
    }
}
