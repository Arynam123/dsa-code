#include<iostream>
using namespace std;
int main(){
    int a,b;

    cout<<"Enter the first number and second number "<<endl;
    cin>>a>>b;
    int m=a;
    int n=b;
    if (a==0) cout<<"The gcd of "<<a<<"and "<<b <<"is:"<<b;
    if (b==0) cout<<"The gcd of "<<a<<"and "<<b <<"is:"<<a;
    while(a>0 && b>0){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    if(a==0){
        cout<<"The gcd of :"<<m<<"and "<<n<<"is"<<b;
    }
    else if(b==0){
        cout<<"The gcd of :"<<m<<"and "<<n<<"is"<<a;
    }


}