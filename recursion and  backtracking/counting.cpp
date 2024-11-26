#include<iostream>
using namespace std;
void counting(int n){
    if(n==0){
        return ;
    }
    
    int ans;
    ans=n;
    cout<<n<<" ";
    counting(n-1);
}
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int main(){
    counting(5);
    cout<<endl;
    cout<<fibo(8);

}