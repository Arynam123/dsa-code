#include<iostream>
using namespace std;
int binarySearch(int num,int divisor){
    int low=0;
    int high=abs(num);
    int mid;
    int ans=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(abs(mid*divisor)<=abs(num)){
            ans=mid;
            low=mid+1;    
        }
        else{
            high=mid-1;
        }
    
    }
    //returning the answer;
    if((num>0 and divisor>0) || (num<0 && divisor<0)){
        return ans;
    }
    else if((num>0 && divisor<0) || (num<0 && divisor>0)){
        return (ans*-1);
    }
   
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int divisor;
    cout<<"Enter the divisor: ";
    cin>>divisor;
    cout<<binarySearch(n,divisor);

}