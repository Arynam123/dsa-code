#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of digit";
    cin>>n;
    int ans=0;
    while(n!=0){
        int digit;
        cout<<"Enter the digit:";
        cin>>digit;
        ans=ans*10+digit;
        n--;
    }
    cout<<ans;
}