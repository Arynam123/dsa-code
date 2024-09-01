#include<iostream>
using namespace std;
void twosum(int arr[],int size,int target){
   
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<"   "<<arr[j]<<endl;
        
            }

        }
    }
}
void checkTwoSumPrintAllAnswers(int arr[], int n, int target) {
    //assuming (-1,-1) as no answer found
    //pair<int,int> ans = make_pair(-1,-1);
    //check all pairs
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i] + arr[j] == target) {
                //found a pair that sums to target
                cout << arr[i] << ", " << arr[j] << endl;
            }
        }
    }
    //agar aap yha tak pohoch gye
    //iska matlab, koi bhi pair target k equal nahi mila
    //iska matlab return false karo
    return ;
}
pair<int,int> twoSum_pair(int arr[],int size,int target){
    pair<int,int> ans=make_pair(-1,-1);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]==target){
                ans.first=arr[i];
                ans.second=arr[j];
                return ans;

            }   
        }
    }
    return ans;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter the target: ";
    int target;
    cin>>target;

    twosum(arr,size,target);
    cout<<endl;
    checkTwoSumPrintAllAnswers(arr,size,target);
    cout<<endl;
    pair<int,int> ans=twoSum_pair(arr,size,target);
    cout<<ans.first<<" "<<ans.second;
}