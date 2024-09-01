#include<iostream>
using namespace std;
int checkbit(int n){
    while(n!=0){
        if(n&1==0){
            return 0; 
            break;
        }
        n=n>>1;
        
    }
    return 1;

}
int main(){
    cout<<checkbit(7);

}