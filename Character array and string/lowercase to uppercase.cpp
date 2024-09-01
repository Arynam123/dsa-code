// #include<iostream>
// using namespace std;
// void lowercaseToUppercae(char arr[],int size){
//     for(int i=0;i<size;i++){
//         // char ch =arr[i];
//         // ch=-'a'+'A'+ch;
//         // arr[i]=ch;
//         arr[i]=arr[i]-'a'+'A';
//     }
//     cout<<arr;
// }
// void uppercasetolowercase(char arr[],int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]>='A' && arr[i]<='Z'){

// arr[i]=arr[i]-'A'+'a';
//         }
        
//     }
//     cout<<arr;

// }
// int main(){
//     char arr[5];
//     cin>>arr;
//     // lowercaseToUppercae(arr,5);
//     uppercasetolowercase(arr,5);
    


// }


// reverse an character array
// #include<iostream>
// using namespace std;
// int main(){
//     char arr[5];
//     cin>>arr;
//     cout<<arr<<endl;
//     int i=0;
//     int j=4;
//     while(i<=j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     cout<<arr;
// }


#include <iostream>
using namespace std;

int main() {
    char arr[100];
    cin >> arr;
    cout << "Original: " << arr << endl;

    // Manually compute the length of the input string
    int length = 0;
    while (arr[length] != '\0') {
        length++;
    }

    int i = 0;
    int j = length - 1;

    while (i <= j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "Reversed: " << arr << endl;
    return 0;


    //palindrome
    int k=0;
    int l=length-1;
    while(i<=j){
        if(arr[k]==arr[l]){
            continue;
        }
        else{
            cout<<"Not palindrome";
            break;
        }
        k++;
        l--;
    }
    cout<<"palindorme";
    
}



