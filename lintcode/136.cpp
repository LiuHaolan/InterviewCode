class Solution {
public:
    /*
     * @param s: A string
     * @return: A list of lists of string
     */
     bool isPalindrome(string s){
         
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            if(s[i] != s[j])
                return false;
        }
        
        return true;
     }
     
     void dfs(string& s, int origin,int index, vector<string> tmp, vector<vector<string>>& res){

        if(index == s.size()-1){
            string cur_str = s.substr(origin,index-origin+1);
            if(isPalindrome(cur_str)){
                tmp.push_back(cur_str);
                res.push_back(tmp);
                return;
            }
            else
                return;
                
        }
        
         
         dfs(s, origin, index+1 , tmp, res);
         
         string cur_str = s.substr(origin,index-origin+1);
         if(isPalindrome(cur_str)){
             tmp.push_back(cur_str);
             
             dfs(s,index+1,index+1,tmp,res);
         }
         else
            return;
         
     }
     
    vector<vector<string>> partition(string &s) {
        // write your code here
        
        vector<vector<string>> results;
        vector<string> p;
        dfs(s, 0, 0, p, results);
        
        return results;
    }
};