class Solution {
public:
    
    vector<vector<int>> res;
    
    void backtrack(vector<int> r,int k, int n, int i){
        if(n==0 && k==0){
            res.push_back(r);
            return;
        }
        if(n==0 || k==0 || i==10)
            return;
        
        r.push_back(i);
        backtrack(r, k-1,n-i,i+1);
        r.pop_back();
        
        backtrack(r,k,n,i+1);
    }
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
            
        vector<int> r;
        backtrack(r,k,n,1);
        
        return res;
        
    }
};