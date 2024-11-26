#include<iostream>
using namespace std;
#include<stack>
bool checksorted(stack<int> &s, int element1){
    if(s.empty()){
        return true;
    }
    int element2=s.top();
    s.pop();
    if(element2<element1){
        bool nextcheck=checksorted(s,element2);
        //backtracking agar oo element wapas chiye 
        s.push(element2);
        return nextcheck;
    }
    else{
        return false;
    }
}
int main(){
    stack <int>s;
    int n;
    cout<<"Enter the size of stack:"<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        s.push(data);

    }
    int max=INT16_MAX;
    cout<<"Check sorted: "<<checksorted(s,max);
    
}