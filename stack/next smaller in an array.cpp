#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

void next_smaller(vector<int>&arr, stack<int>&st,vector<int>&ans){
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        int element=arr[i];
        if(st.top()>=element){
            st.pop();

        }
        ans.push_back(st.top());
        st.push(element);

    }
}
int main(){
    vector<int>arr;
    arr.push_back(8);
    arr.push_back(4); 
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(3);
    vector<int>ans;
    stack<int>st;
    st.push(-1);
    next_smaller(arr,st,ans);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}