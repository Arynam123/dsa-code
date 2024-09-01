// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
        
//     }
//     cout<<"unique element is: "<<ans<<endl;
// }



// alternate solution
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of element in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i];
        }

    }
}