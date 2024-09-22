#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){//how many times it will run
            int min=i;
            for(int j=i+1;j<nums.size();j++){// how many times it will compare
                if(nums[min]>nums[j]){
                    min=j;
                }
            }
            swap(nums[min],nums[i]);
        }
        return nums;   
    }
};
vector<int> insertionsort(vector<int> & arr){
    for(int i=1;i<arr.size();i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
            
        }
        //swap with key
        arr[j+1]=key;
    }
    return arr;
}
int main(){
    vector<int> v;
    v={4,2,1,0,89,87,12,76,23};
    Solution solution;
    vector<int> sortedNums = solution.sortArray(v);

    for(int i:sortedNums){
        cout<<i<<" ";
    }  
    cout<<endl;
    vector <int> Intsort=insertionsort(v);
    for(int i:Intsort){
        cout<<i<<" ";
    }
}