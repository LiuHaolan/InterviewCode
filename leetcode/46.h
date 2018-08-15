class Solution {
public:
    void backtrack(set<int>& s, vector<int> per, vector<vector<int>>& res){
        
        if(per.size() == s.size()){
            res.push_back(per);
            return;
        }
        
        for(auto it = s.begin();it!= s.end();it++){
            int a = *it;
            
            auto itt = find(per.begin(),per.end(),a);
            if(itt == per.end()){
                per.push_back(a);  
                backtrack(s, per, res);
                per.pop_back();
            }


        }
        
        return;
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        
        set<int> s;
        for(int j=0;j<nums.size();j++){
            s.insert(nums[j]);
        }   
        
        vector<vector<int>> res;
        vector<int> a;
        backtrack(s, a, res);
        return res;
        
    }
};