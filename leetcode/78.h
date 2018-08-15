class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result;
        
        int n = nums.size();
        
        for(int i=0;i<(1<<n);i++){
            
            int cnt = i;
            vector<int> res;
            for(int j=0;j<nums.size();j++){
                if(cnt%2 == 1)
                    res.push_back(nums[j]);
                cnt = cnt/2;
            }
            result.push_back(res);
        }
        
        
        return result;
        
    }
};