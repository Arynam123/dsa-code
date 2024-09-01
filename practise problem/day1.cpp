// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        //this for space
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        //this for stars
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //
    //bottom stars
    for(int i=n-1;i>0;i--){
        //this is for space
        for(int j=0;j>n-i+1;j++){
            cout<<" ";
        }
        //this is for stars
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}