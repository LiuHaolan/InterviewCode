class Solution {
public:
    
    int coinChange(vector<int>& coins, int amount){
        if(coins.size()==0)
            return -1;
        if(amount < 0)
            return -1;
        if(amount ==0)
            return 0;
        
        sort(coins.begin(),coins.end());
        
        vector<int> memo(amount+1, -1);
        memo[0] = 0;
        for(int i=1;i<coins[0] && i<=amount;i++){
            memo[i] = -1;
        }
        
        for(int i=0;i<coins.size();i++){
            if(coins[i] <= amount)
                memo[coins[i]] = 1;
        }

        if(coins[0]>amount)
            return -1;
        for(int i=coins[0]+1;i<=amount;i++){
            int min = INT_MAX;
            
            for(auto it=coins.begin();it!=coins.end();it++){
                if(i>=*it && memo[i-*it]!=-1 && memo[i-*it] < min){
                    min = memo[i-*it];
                }
            }
            if(min<INT_MAX)
                memo[i] = min+1;
            else
                memo[i] = -1;
        }
    
        return memo[amount];
    }

};