//remove trailing space
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void remove_extra_space(string &s){
    int i=0;
    int j=0;
    int n=s.length();
    while(i<n && s[i]==' '){
        i++;

    }
    while(i<n){
        if(s[i]!=' '){
            if(j!=0){
                s[j]=' ';
                j++;
            }
            while(i<n && s[i]!=' '){
                s[j]=s[i];
                j++;i++;
            }   
        }
        else{
            i++;
        }
    }
    s.resize(j);
    
}

int main(){
    string s="  my name   is  khan   ";
    remove_extra_space(s);
    cout<<"the string after removing extra space is:"<<s;

}
