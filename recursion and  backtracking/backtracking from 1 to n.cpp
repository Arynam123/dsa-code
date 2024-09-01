// #include<iostream>
// using namespace std;
// void f(int i,int n){
//     //base condition jab tak 1 se chota na ho jaye
//     if(i<1){
//         return;
//     }

//     //backtracking
//     f(i-1,n);
//     cout<<i<<endl;

// }
// int main(){
//     //input from the user
//     int n;
//     cin>>n;
//     //calling the function
//     f(n,n);
// }


/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<n){
        int j = i,count = 2*n+1,gaps=(n-i-1),k=1;
        while(k<gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1,ch = count - 2*gaps;
        while(m<ch){
            cout<<"*";
            m = m + 1;
        }
        k = 1;
        while(k<gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}


