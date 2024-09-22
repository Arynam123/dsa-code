#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout<<a<<endl;
    int b=a;
    cout<<&b<<endl;
    cout<<&a<<endl;
    int *c=&a;
    cout<<c;
}