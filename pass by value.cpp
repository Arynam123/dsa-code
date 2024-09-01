#include<iostream>
using namespace std;
int increase(int a){
    a++;
    return a;

}
int main(){
    int a=4;
    
    cout<<increase(a)<<endl;
    cout<<a<<endl;


}