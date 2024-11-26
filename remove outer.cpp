#include<iostream>
using namespace std;
void removebracket(string &str,string &ans){
    int count=0;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='('){
            count++;
            ans.push_back(ch);
        }
        else if(ch==')' && count!=0){
            count--;
            ans.push_back(ch);

        }
        else if(ch==')'&& count==0){
            ans.erase(count,1);
        }
    }
    //cout<<ans;
}
int main(){
    string s="(())";
    string ans="";
    removebracket(s,ans);
    cout<<"answer stirng is: "<<ans;
}