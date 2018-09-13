class Solution {
public:
    /**
     * @param nums: A set of numbers
     * @return: A list of lists
     */
     
     vector<vector<int>> res;
     void dfs(vector<int>& nums, int cur, vector<int> s){
         if(cur == nums.size()){
            res.push_back(s);
            return;
         }
         
         dfs(nums,cur+1,s);
         s.push_back(nums[cur]);
         dfs(nums,cur+1,s);
     }
     
    vector<vector<int>> subsets(vector<int> &nums) {
        // write your code here
        if(nums.size()==0)
            return vector<vector<int>>(1);
        
        sort(nums.begin(),nums.end());
        
        vector<int> q;
        dfs(nums,0,q);
        return res;
    }
};