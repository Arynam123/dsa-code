#include<iostream>
using namespace std;
void lastOccurance(string s,int index, char x,int &ans){
    if(index==s.length()){
        return;

    }
    char ch=s[index];
    if(x==ch){
        ans=index;
    }
    lastOccurance(s,index+1,x,ans);
}
void reverse(string &s,int i,int j){
    if(i>j){
        return ;
    }
    if(i<=j){
        swap(s[i],s[j]);
    }
    reverse(s,i+1,j--);
}
void add(string s,)
int main(){
    string s="abbcdde";
    int index=0;
    int ans=-1;
    char x='d';

    // lastOccurance(s,index,x,ans);
    // cout<<"last occurance of d is:"<<ans;
    int i=0;
    int j=s.length()-1;
    reverse(s,i,j);
    cout<<"The reversed stirng is :"<<s;


}