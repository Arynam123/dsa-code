#include<iostream>
#include<vector>
using namespace std;
void solve(int n,string output,vector<string>&ans){
    
    if(n==0){
        ans.push_back(output);
        return ;

    }
    solve(n-1,output+"0",ans);
    solve(n-1,output+"1",ans);


}
int main(){
    vector<string>ans;
    string output="";
    int n=3;
    solve(n,output,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}