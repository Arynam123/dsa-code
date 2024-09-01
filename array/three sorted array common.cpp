#include<iostream>
#include<vector>
using namespace std;
vector<int> common(int A[],int B[],int C[],int n1,int n2,int n3){
    int i=0;
    int j=0;
    int k=0;
    vector <int> ans;
    set<int>st;
    while(i<n1 && j<n2 && k<n3){
        if(A[i]==B[j] && B[j]==C[k]){
            st.insert(A[i]);

            //ans.push_back(A[i]);
            i++;j++;k++;
        }
        else if(A[i]<B[j]){
            i++;
        }
        else if(B[j]<C[k]){
            j++;
        }
        else{
            k++;
        }
    }
    for(auto it:st){
        ans.push_back(it);
    }
    return ans;

}
int main(){
    int arr1[5]={10,20,40,50,60};
    int arr2[3]={10,50,70};
    int arr3[7]={1,2,3,4,50,80,90};
    vector <int> v=common(arr1,arr2,arr3,5,3,7);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}