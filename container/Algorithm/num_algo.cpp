#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main(){
    vector <int> arr={1,2,3,4,5};
    int total=accumulate(arr.begin(),arr.end(),-10);
    cout<<total<<endl;
    

    vector<int> v1={1,2,3};
    vector<int> v2={4,5,6};
    int ans=inner_product(v1.begin(),v1.end(),v2.begin(),0);
    cout<<ans<<endl;

    vector<int> result(v1.size());
    partial_sum(v1.begin(),v1.end(),result.begin());
    for(int i:result){
        cout<<i<<" ";
    }
cout<<endl;
    //iota
    vector <int> i(5);
    iota(i.begin(),i.end(),43);
    for(int i:i){
        cout<<i<<" ";
    }


}