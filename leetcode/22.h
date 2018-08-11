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


// backtracking
class Solution {
public:
    void backtrack(string& str, vector<string>& s, int n, int value){
        if(value < 0)
            return;
        
        if(n==0){
            if(value == 0){
                s.push_back(str);
                return;
            }
            else
                return;
        }
        
        string s1 = str+"(";
        backtrack(s1, s, n-1, value+1);
        string s2 = str+")";
        backtrack(s2, s, n-1, value-1);
    }
    
    vector<string> generateParenthesis(int n) {
        
        string str = "";
        vector<string> s;
        backtrack(str, s, 2*n, 0);
        
        return s;
    }
};