#include<iostream>
#include<queue>
using namespace std;
int main(){
    string s="ababc";
    //2 thing that i need
    //1st hai frequency table
    //2nd hai queue
    int freq[26]={0};
    queue <char> q;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        freq[ch-'a']++;
        q.push(ch);
    }
    while(!q.empty()){
        char frontchar=q.front();
        if(freq[frontchar-'a']>1){
            q.pop();
        }
        else{
            cout<<frontchar<<" ";
            break; 
        }
    }
    if(q.empty()){
        cout<<"#";
        
    }

}