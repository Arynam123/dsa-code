#include<iostream>
using namespace std;
#include<queue>
#include<deque>
void sliding_window(vector<int> arr, int k){
    int n=arr.size();
    vector<int> ans;
    deque<int> dq;

    for(int index=0;index<k;index++){
        if(arr[index]>0){
            int maxi=INT16_MIN;
            for(int index=0;index<k;index++){
                if(arr[index]>maxi){
                    maxi=index;
                }
            }
            dq.push_back(maxi);
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
        if(arr[i]>0){
            int maxi=INT16_MIN;
            for(int i=0;i<k;i++){
                if(arr[i]>maxi){
                    maxi=i;
                }
            }
            dq.push_back(maxi);
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
    vector<int>arr={1,3,-1,-3,5,3,6,7};
    int k=3;
    sliding_window(arr,k);
}