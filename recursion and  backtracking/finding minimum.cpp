#include<iostream>
#include<vector>
using namespace std;
void findmini(vector<int> arr,int index,int &mini){
    if(index==arr.size()){
        return;
    }

    mini=min(mini,arr[index]);
    findmini(arr,index+1,mini);
}
int main(){
    vector <int> arr={2,1,3,5};
    int index=0;
    int mini=INT16_MAX;
    findmini(arr,index,mini);
    cout<<"The minimum value is: "<<mini;
}

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int profit = 0;
        for(int i=1;i<n;i++){
            buy = min(prices[i],buy);
            profit = max(profit,prices[i]-buy);
        }
        return profit;
    }
};