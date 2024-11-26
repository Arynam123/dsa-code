#include<iostream>
using namespace std;
#include<queue>
#include<deque>
void sliding_window(vector<int> arr, int k){
    int n=arr.size();
    vector<int> ans;
    deque<int> dq;

    for(int index=0;index<k;index++){
        if(arr[index]<0){
            dq.push_back(index);

        }
    }
    for(int i=k;i<n;i++){
        //step 1 keeping the answer
        if(dq.empty()){
            ans.push_back(0);
        }
        else{
            int index=dq.front();
            int element=arr[index];
            ans.push_back(element);
        }
        //step 2 removal
        if(i-dq.front()>=k && !dq.empty()){
            dq.pop_front();
        }
        if(arr[i]<0){
            dq.push_back(i);
        }

    }
    //keeping last answer because loop ends;
    if(dq.empty()){
        ans.push_back(0);

    }
    else{
        int index=dq.front();
        int element=arr[index];
        ans.push_back(element);
    }
    cout<<"answer of sliding window"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    vector<int>arr={-2,-1,0,-7,9};
    int k=3;
    sliding_window(arr,k);
}