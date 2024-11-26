#include<iostream>
#include<vector>
using namespace std;


// void printSequence(string str,int i,string output){
//     if(i==str.length()){
//         cout<<output<<" ";
//         return;
//     }
//     //include 
//     char ch=str[i];
//     //ab recursion sambhale ga
//     printSequence(str,i+1,output+ch);
//     //exclude
//     printSequence(str,i+1,output);
// }

//USING VECTOR
void printSequence(string str,int i,string output,vector<string>&ans){
    if(i>=str.length()){
        //cout<<output<<" ";
        ans.push_back(output);
        return;
    }
    //include 
    char ch=str[i];
    //ab recursion sambhale ga
    printSequence(str,i+1,output+ch,ans);
    //exclude
    printSequence(str,i+1,output,ans);
}


int main(){
    string s="XYZ";
    string result="";
    int index=0;
    vector<string>ans;
    printSequence(s,index,result,ans);
    cout<<"Size of the ans vector is: "<<ans.size()<<endl;

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}


