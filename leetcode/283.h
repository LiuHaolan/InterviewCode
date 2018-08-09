class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0){
                int i;
                
                for(i=j+1;i<nums.size();i++){
                    if(nums[i]!=0){
                        nums[j] = nums[i];
                        nums[i] = 0;
         
                        break;
                    }
                }
                if(i==nums.size())
                    break;
                
            }
        }
        
    }
};