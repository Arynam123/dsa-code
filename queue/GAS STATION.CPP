#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int front=0;
        int rear=0;
        int bal=0;
        
        while(front<gas.size()){
            //int i=0;
            bal=bal+gas[rear]-cost[rear];
            

            if(bal<0){
                front=rear+1;
                bal=0; 
                if(front>=gas.size()) break;
                rear=front;
            }
            else{
                rear++;
                if(rear==gas.size()){
                    rear=0;
                }
                if(front==rear){
                    return front;
                }
            }       
        }
        return -1;

    }
};