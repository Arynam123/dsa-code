#include<iostream>
using namespace std;
// int main(){
//     cout<<"hi"<<endl;
//     int *ptr=0;
//     int a=10;
//     *ptr=a;
//     cout<<"*ptr: "<<*ptr;
// }
// int main(){
//     char ch[7]="Aryan";
//     cout<<"Ch: "<<ch<<endl;
//     char *cptr=ch;
//     cout<<"Cptr: "<<cptr<<endl;
//     cout<<"*Cptr: "<<*cptr<<endl;
//     cout<<"[0]Cptr: "<<cptr[4]<<endl;
//     cout<<"Cptr+2: "<<cptr+2<<endl;
//     cout<<"Size of cptr: "<<sizeof(cptr)<<endl;
//     cout<<*(cptr)+2<<endl;

//     cout<<char('A'+2);

// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *ptr=arr;
//     int *ptr1=arr+3;
//     cout<<ptr1-ptr;
// }

void fun(int arr[]){
    arr[0]=1;
    cout<<arr[0]<<" ";
}
int main(){
    int arr[]={1,2,3,4};
    fun(arr+1);
    cout<<arr[0];
}
