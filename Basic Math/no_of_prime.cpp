#include<iostream>
using namespace std;
int main(){
    int count=0;
    for(int i=1;i<499979;i++){
        int c=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            count++;
        }
    }
    cout<<count;
}