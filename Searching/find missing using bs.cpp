#include<iostream>
#include<vector>
using namespace std;
int missing(vector<int> &nums){
    int low=0;
    int high=nums.size()-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(nums[mid]==mid){
            low=mid+1;
        }
        else if(nums[mid]>mid){
            high=mid-1;
        }
        
    }
    return low;
}
int main(){
    
    vector<int> nums;
    nums={0,1,2,3,4};
    cout<<"Missing element is: "<<missing(nums);
}