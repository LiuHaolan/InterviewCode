#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <set>

class Solution {
public:
    void backtrack(set<int> s, vector<int> per, vector<vector<int>>& res){
        
        if(s.empty()){
            res.push_back(per);
            return;
        }
        
        for(auto it = s.begin();it!= s.end();it++){
            int a = *it;
            per.push_back(*it);
            s.erase(a);
        
            backtrack(s, per, res);
            
            per.pop_back();
            s.insert(a);
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