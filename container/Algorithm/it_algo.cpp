#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void twoXmuliplier(int a){
    cout<<2*a<<" ";
}
int  even(int a){
    return a%2==0;
}
int main(){
     vector<int> arr={11,9,3,3,3,3,3,0,50,11,1,1,11};
    // for_each(arr.begin(),arr.end(),twoXmuliplier);
    // cout<<endl;

    // int target=50;
    // auto a=find(arr.begin(),arr.end(),target);
    // cout<<*a;
    
    //find_if
    // auto it=find_if(arr.begin(),arr.end(),even);
    // cout<<*it<<endl;


    // auto it=count(arr.begin(),arr.end(),32);
    // cout<<it<<endl;

    //count if

    // auto it=count_if(arr.begin(),arr.end(),even);
    // cout<<it<<endl;

    // sort(arr.begin(),arr.end());
    // for(int i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // cout<<"Reversed array";
    // reverse(arr.begin(),arr.end());
    // for(int i:arr){
    //     cout<<i<<" ";
    // }


    //rotate
    // vector<int> v={1,2,3,4,5,6};
    // cout<<"before rotation"<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // rotate(v.begin(),v.begin()+3,v.end());
    // cout<<"After rotation"<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // partition(v.begin(),v.end(),even);
    // for(int it:v){
    //     cout<<it<<" ";
    // }
    

    //unique element;
    
    // auto it=unique(arr.begin(),arr.end());
    // arr.erase(it,arr.end());
    // for(int a:arr){
    //     cout<<a<<" ";
    // }



    



    

}