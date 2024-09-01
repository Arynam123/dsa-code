#include<iostream>
#include<list>
using namespace std;

int main(){
    // list<int> mylist;
    // mylist.push_back(10);
    // mylist.push_back(20);
    // mylist.push_back(30);
    // mylist.push_back(50);
    // mylist.push_back(160);

    // mylist.push_front(123);
    // mylist.push_back(30);

    // cout<<mylist.front()<<endl;
    // cout<<mylist.back()<<endl;
    // mylist.pop_front();
    // cout<<mylist.front()<<endl;

    // //remove
    // mylist.remove(30);



    // list<int>::iterator it=mylist.begin();
    // while(it!=mylist.end()){
    //     cout<<*it<<"  ";
    //     it++;
    // }
    // cout<<endl;
    // cout<<"Size: "<<mylist.size()<<endl;
    // cout<<mylist.empty()<<endl;
    // mylist.clear();
    // mylist.insert(mylist.end(),1000);
    // cout<<mylist.back()<<endl;
    // cout<<mylist.empty()<<endl;
    // mylist.clear();
    // cout<<mylist.empty();




    list<int>l;
    l.push_back(10);
    l.push_back(11);
    l.push_back(12);
    l.push_back(13);

//before swapping
    list<int> ::iterator it=l.begin();
    while(it!=l.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;


    list<int>l1;
    l1.push_back(111);
    l1.push_back(112);
    l1.push_back(122);
    l1.push_back(133);

    l.swap(l1);


    //iterator
    //after swapping all values of l1 are in l
    list<int> ::iterator it1=l.begin();
    while(it1!=l.end()){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;

    l.erase(l.begin(),l.end());
    cout<<l.empty()<<endl;

    




    

}
    
