#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// int countpalindrome(string s){
//     int i=0;
//     int j=s.length()-1;
//     while(i<=j){
//         if(s[i]!=s[j]){
//             return 0;
//         }
//         else{
//             i++;
//             j--;

//         }
//     }
//     return 1;
// }
// int main(){
//     cout<<"enter your string: ";
//     string s;
//     cin>>s;
//     int count=0;
//     int ans;
//     for(int i=0;i<s.length();i++){
//         for(int j=1;j<=s.length()-i;j++){
//             string s1;
//             s1=s.substr(i,j);
//             //ans=countpalindrome(s1);
//             count=count+countpalindrome(s1);
//         }
//     }
//     cout<<"no of palindrome is: "<<count;
// }
string expandaroundcenter(string s,int i,int j){
    while(i>=0 && j<s.length()){
        return s.substr(i,j);
        i--;
        j++;
    }
}
int main(){
    cout<<"enter your string:";
    string s;
    cin>>s;
    for(int c=0;c<s.length();c++){
        //odd
        //i==j
        int i=c;
        int j=c;
        string s1;
        s1=expandaroundcenter(s1,i,j);
        cout<<s1<<" ";
        //even
        int k=c;
        int l=c+1;
        string s2;
        s2=expandaroundcenter(s2,k,l);
        cout<<s2<" ";
    }
}