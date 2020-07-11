class Solution {
public:
    std::vector<int> cache;
    
    int coinChange(vector<int>& coins, int amount){
        cache.clear();
        cache.resize(amount+1,-1);
        
         std::sort(coins.begin(), coins.end());
        
         for(auto it=coins.begin();it!=coins.end();it++){
             if(*it <= amount)
                cache[*it] = 1;  
        }
        return coinChange_(coins, amount);
    }
    
    int coinChange_(vector<int>& coins, int amount) {
        
        if(amount==0)
            return 0;
        
        if(amount<0)
            return -1;
        
        // judge cache
        if(cache[amount]!=-1)
            return cache[amount];
        
       
        if(amount<coins[0])
            return -1;
       
        
        int min = INT_MAX;
        for(auto it=coins.begin();it!=coins.end();it++){
            
            int cur = coinChange_(coins, amount-*it);
            
            if(cur!=-1){
                
                int res = cur+1;
                if(res<min)
                    min = res;
            }
            
        }
        if(min!=INT_MAX){
           cache[amount] = min;
            return min;
        }
        else{
            cache[amount] = -1;
            return -1;
        } 
    }
};