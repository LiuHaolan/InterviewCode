class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        
        vector<int> diff(prices.size()-1);
        
        for(int j=0;j<diff.size();j++){
            diff[j] = prices[j+1] - prices[j];
        }
        
        int sum = 0;
        int b = 0;
        for(int j=0;j<diff.size();j++){
            b = max(b+diff[j],diff[j]);
            if(b>sum)
                sum = b;
        }
        
        return sum;
        
    }
};