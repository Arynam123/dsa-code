#include<iostream>
using namespace std;

// void printArray(int arr[],int size,int index){
//     if(index==size){
//         return;
//         //index out of bound
//     }
    
//     cout<<arr[index]<<" 0";
//     printArray(arr,size,index+1);
// }
bool search(int arr[],int size,int key,int index){
    //base condition
    //2 base case 1 found 2nd is not found
    if(index>=size){
        return false;
    }
    if(arr[index]==key){
        return true;
    }
    return search(arr,size,key,index+1);

}
void maximum(int arr[],int size,int index,int &maxi){
    //Base condition 
    if(index==size){
        return ;
    }
    //calculation part

    maxi=max(maxi,arr[index]);
    //recursion part
    
    maximum(arr,size,index+1,maxi);
    

}
//print all even number in an array
void printeven(int arr[],int size,int index){
    if(index>=size){
        return ;

    }
    //1 case mai solve karunga
    if(!(arr[index]&1)){
        cout<<arr[index]<<" ";
    }
    printeven(arr,size,index+1);
}
void reversenumber(int num){
    if(num<=0){
        return;
    }
    int digit;
    digit=num%10;
    cout<<digit;
    num=num/10;
    reversenumber(num);

}
bool checksorted(int arr[],int size,int index){
    //base condition
    if(index==size){
        return true;
    }
    
    if((arr[index]>arr[index+1])&& index+1<size){
        return false;
    }
    //1 kaam maine kiya aur baki kaam recursion karega
    return checksorted(arr,size,index+1);
}
int main(){
    int arr[]={11,23,30,40,50,60};
    int size=6;
    int index=0;
    //printArray(arr,size,index);
    cout<<endl;
    // int key=80;
    // int maxi=INT8_MIN;


    //cout<<search(arr,size,key,index);
    // maximum(arr,size,index,maxi);

    //maxi value will be upadated and send to main function
    //as it is passed by reference
    // cout<<"Maximum is: "<<maxi<<endl;
    // printeven(arr,size,index);
    // cout<<endl;
    // reversenumber(123);
    cout<<checksorted(arr,size,index);


}