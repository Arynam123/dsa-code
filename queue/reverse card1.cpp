class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n=deck.size();
        int j=0;
        bool flag=false;
        int i=0;
        vector<int>result(n,0);
        while(i<n){
            if(result[j]==0){
                if(flag==false){
                    result[j]=deck[i];
                    i++;
                    
                }
                flag=!flag;
            }
            j=(j+1)%n;
        }   
        return result;  
    }
};