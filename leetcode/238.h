class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> res(nums.size(),1);
 //       res.push_back(nums[1]);
   
//        res[nums.size()-1] = 1;
        for(int j=nums.size()-2;j>=0;j--){
            res[j] = nums[j+1]*res[j+1];
            
        }
  
        
        int left = 1;
        for(int j=0;j<nums.size();j++){
            res[j] *= left;
            left *= nums[j];
            
        }
        
        return res;
    }
};