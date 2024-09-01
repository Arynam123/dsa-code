#include<iostream>
#include<vector>
using namespace std;
int first_Repeating(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        int count=0;
        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count>=2){
                return i;
            }
        }
    }
    return -1;

}
#include <unordered_map>
#include <vector>
using namespace std;

int first_Repeating_Element(vector<int> &arr) {
    unordered_map<int, int> hash;
    
    // First loop to count occurrences
    for(int i = 0; i < arr.size(); i++) {
        hash[arr[i]]++;  // Corrected 'a' to 'arr'
    }
    
    // Second loop to find the first repeating element
    for(int i = 0; i < arr.size(); i++) {
        if(hash[arr[i]] > 1) {  // Corrected 'a' to 'arr'
            return i + 1;  // Returning 1-based index
        }
    }
    
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        v.push_back(data);
    }
    cout<<"the first repeating element is at:"<<first_Repeating(v)<<" index"<<endl;

    cout<<first_Repeating_Element(v);

}