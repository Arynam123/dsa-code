// C++ program to convert string 
// to char array Using the address 
// assignment of each other method 
#include <iostream> 
#include <string> 
#include<vector>
using namespace std;
// Driver Code 
string istype(char ch){
	if((ch>=65 && ch<=90)|| (ch>=97 && ch<=122)){
		return "alpha";
	}
	else if((ch>=65 && ch<=90)|| (ch>=97 && ch<=122) || (ch>='0' && ch <='9')){
		return "alpha numeric";
	}
	else{
		return "Special character";
	}
}
char uppercase(char ch){
	if((ch>=90 && ch<=122)) {
		ch=ch-'a'+'A';
	}
	else if(ch>=65 && ch<=90){
		ch=ch;
	}
	return ch;
}
char lowercase(char ch){
	if(ch>=90 && ch<=122){
		ch=ch;
	}
	else if(ch<=65 && ch>=90){
		ch=ch-'A'+'a';
	}
	return ch;
}
string isvowel(char ch){
	if((ch=='A'|| ch=='E'|| ch=='I' ||ch=='O'|| ch=='U') || (ch=='a'|| ch=='e'|| ch=='i' ||ch=='o'|| ch=='u')){
		return "is vowel";
	}
	return "not a vowel";
	
}
// int main(){
// 	char ch='r';
// 	char ch1='A';
// 	char ch2='6';
// 	cout<<istype(ch)<<endl;
// 	cout<<istype(ch1)<<endl;
// 	cout<<istype(ch2)<<endl;
// 	cout<<uppercase('A')<<endl;
// 	cout<<uppercase('b')<<endl;
// 	cout<<lowercase('r')<<endl;
// 	cout<<lowercase('b')<<endl;
// 	cout<<isvowel('A')<<endl;
	
// }
// int main(){
// 	vector<char> ch={"A","B","C","D"};
// 	int i=0;
// 	int j=ch.size()-1;
// 	while(i<j){
// 		char k=ch[i];
// 		char l=ch[j];
// 		swap(k,l);
// 		i++;
// 		j--;
// 	}
// 	for(int i=0;i<ch.size();i++){
// 		cout<<ch[i]<<" ";
// 	}
// }
void reverse(string s,int start,int end){
	while(start<end){
		swap(s[start],s[end]);
		start++;
		end--;
	}
	
}

void reversewords(string s){
	string s="My name is khan";
	cout<<"reverse each word in a string:"<<endl;
	int start=0;
	for(int end=0;end<s.length();end++){
		reverse(s,start,end);
		end=start+1;
	}
	reverse(s,start,s.length());

}

int main() {
    string s = "my name is khan";
    reverseWords(s);

    std::cout << "Output: " << s << std::endl;

    return 0;
}