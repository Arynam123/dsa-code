#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="ab-cd";
    reverse(s.begin(),s.end());
    cout<<s;

}