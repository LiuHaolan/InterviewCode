class Solution {
public:
    vector<vector<int>> res;
    
    bool judge(int x1,int y1,int x2,int y2){
        if(x1==x2)
            return false;
        if(y1==y2)
            return false;
        if(((x1 - x2) == (y1 - y2)) || ((x1-x2) == (y2-y1)))
            return false;
        return true;
        
    }
    
    void backtrack(vector<int> s, int n){
        if(s.size()==n){
            res.push_back(s);
            return;
        }
            
        
        for(int j=0;j<n;j++){
            
            bool valid = true;
            for(int i=0;i<s.size();i++){
                if(!judge(i,s[i],s.size(),j)){
                   valid = false;
                    break;
                }        
            }
            
            if(valid){
                s.push_back(j);
                backtrack(s,n);
                s.pop_back();
            }
            
        }
        
    }
    
    int totalNQueens(int n) {
        
        vector<int> s;
        backtrack(s, n);
        return res.size();
        
    }
};