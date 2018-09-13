class Solution {
public:
    /*
     * @param s: A string
     * @return: A list of lists of string
     */
     vector<vector<int>> palidrome;
     
     bool isPalindrome(string s,int p,int q){
         
        if(p+1 == q){
            if(s[p] == s[q]){
                palidrome[p][q] = 1;
                return true;
            }
            else{
                 palidrome[p][q] = -1;
                return false;
            }    
        }
         
        if(palidrome[p][q]!=0){
            return palidrome[p][q] == 1;
        } 
        else {
            
            if(s[p] != s[q]){
                palidrome[p][q] = -1;
            }
            else{
                if(isPalindrome(s,p+1,q-1))
                    palidrome[p][q] = 1;
                else
                    palidrome[p][q] = -1;    
            }
            
            return palidrome[p][q] == 1;
        }
        
        
     }
     
     void dfs(string& s, int origin,int index, vector<string> tmp, vector<vector<string>>& res){

        if(index == s.size()-1){
            string cur_str = s.substr(origin,index-origin+1);
            if(isPalindrome(s,origin,index)){
                tmp.push_back(cur_str);
                res.push_back(tmp);
                return;
            }
            else
                return;
                
        }
        
         
         dfs(s, origin, index+1 , tmp, res);
         
         string cur_str = s.substr(origin,index-origin+1);
         if(isPalindrome(s,origin,index)){
             tmp.push_back(cur_str);
             
             dfs(s,index+1,index+1,tmp,res);
         }
         else
            return;
         
     }
     
    vector<vector<string>> partition(string &s) {
        // write your code here
        
        for(int j=0;j<s.size();j++){
            vector<int> pali(s.size(),0);
            pali[j] = 1;
            palidrome.push_back(pali);
        }
        
        vector<vector<string>> results;
        vector<string> p;
        dfs(s, 0, 0, p, results);
        
        return results;
    }
};