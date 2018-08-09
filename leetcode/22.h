class Solution {
public:
    bool judgeString(string s){
        int cnt = 0;
        for(auto it = s.begin();it!=s.end();it++){
            if(*it == '(')
               cnt++;
            else
               cnt --;
            
            if(cnt < 0)
                return false;
        }
        if(cnt ==0)
            return true;
        else
            return false;
    } 
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> s;
        s.push_back("(");
        
        n = n*2-1;
        while(n-->0){
            vector<string> res;
            
            for(int i=0;i<s.size();i++){
                string p = s[i];
                
                res.push_back(s[i]+'(');
                res.push_back(s[i]+')');
            }
            
            s = res;
        }

        vector<string> r;
        for(int i=0;i<s.size();i++){
            if(judgeString(s[i]))
                r.push_back(s[i]);
        }
        
        return r;
    }
};