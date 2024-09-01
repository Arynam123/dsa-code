#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map <string,string> mpp;
    mpp["in"]="INDIA";
    mpp.insert(make_pair("us","UNITED STATES"));

    pair<string,string> p;
    p.first="br";
    p.second="BRAZIL";

    mpp.insert(p);

    //size of map
    cout<<"Size: "<<mpp.size()<<endl;

    //iterator
    unordered_map<string,string>::iterator it=mpp.begin();
    while(it!=mpp.end()){
        pair<string,string> p=*it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }

    //finding in map works till the end of the map table
    if(mpp.find("in")!=mpp.end()){
        cout<<"Key found!!!"<<endl;
    }
    else{
        cout<<"key not found!!!"<<endl;
    }


    //count
    if(mpp.count("imp")==1){
        cout<<"Key found!!!"<<endl;
    }
    else{
        cout<<"Key nahi mila !!!"<<endl;
    }
}
