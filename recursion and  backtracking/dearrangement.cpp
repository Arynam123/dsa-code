#include<iostream>
using namespace std;
int dearrangement(int size){
    
    if(size==1){
        return 0;
    }
    if(size==2){
        return 1;
    }
    int ans=(size-1)*(dearrangement(size-2)+dearrangement(size-1));
    return ans;
}

int colorarrangement(int k,int poles){
    if(poles==1){
        return k;

    }
    if(poles==2){
        return k+k*(k-1);
    }
    int ans=(poles-1)*(colorarrangement(k,poles-2)+colorarrangement(k,poles-1));
    return ans;
}
int main(){
    
    //cout<<dearrangement(4);
    cout<<"total no of ways poles can be colored are:"<<colorarrangement(3,3);
}
