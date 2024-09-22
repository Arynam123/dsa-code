// #include <iostream>
// #include <string>
// using namespace std;
// void reverseWord(std::string &s, int start, int end) {
//     // Manually reverse the word from start to end
//     while (start < end) {
//         char temp = s[start];
//         s[start] = s[end];
//         s[end] = temp;
//         start++;
//         end--;
//     }
// }

// void reverseWords(std::string &s) {
//     int start = 0;

//     // Traverse through the string
//     for (int end = 0; end < s.length(); ++end) {
//         if (s[end] == ' ') {
//             // Reverse the current word
//             reverseWord(s, start, end - 1);
//             start = end + 1; // Move to the next word
//         }
//     }

//     // Reverse the last word
//     reverseWord(s, start, s.length() - 1);
    
// }

// int main() {
//     std::string s = "my name is khan";
//     reverseWords(s);

//     std::cout << "Output: " << s << std::endl;

//     return 0;
// }



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverseword(string &s, int start, int end){
    while(start<end){
        swap(s[start],s[end]);
        start++; end--;
    }
}
void reversewords(string &s){
    int start=0;
    for(int end=0;end<s.length();end++){
        if(s[end]==' '){
            reverseword(s,start,end-1);
            start=end+1;
        }
    }
    //revesing the last element
    reverseword(s,start,s.length()-1);
}
// int main(){
//     string s="My name is Aryan";
//     reversewords(s);
//     cout<<"The reversed word is:"<<s<<endl;
//     string s1=s;
//     reverse(s1.begin(),s1.end());
//     cout<<s1;

// }

int main(){
    string s="my name is aryan";
    reverse(s.begin(),s.end());
    reversewords(s);
    cout<<"the reveresed word is: "<<s;


}