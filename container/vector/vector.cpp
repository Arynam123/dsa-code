#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5];
    fill(arr,arr+2,1);
    fill(arr+2,arr+4,2);
    fill(arr+4,arr+5,3);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    vector<vector<int>> arr1(4,vector<int>(5,9));
    int row=arr1.size();
    int col=arr1[0].size();
    cout<<"Number of rows: "<<row<<" Number of column: "<<col<<endl;

    //having diffent size column
    vector<vector<int>> v(3);
    int r=v.size();
    cout<<r<<endl;
    v[0]=vector<int>(4);
    v[1]=vector<int>(2);
    v[2]=vector<int>(1);
    cout<<v[2].size()<<endl;
    

    vector<int> first;
    first.push_back(20);
    first.push_back(40);
    first.push_back(60);
    first.push_back(80);
    first.push_back(100);
    
    //iterator in vector
    vector <int> ::iterator it= first.begin();
    while(it!=first.end()){
        cout<<*it<< " "<<endl;
        it++;
    }
}
