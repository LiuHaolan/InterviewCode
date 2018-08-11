class Solution {
public:
    int translate(char c){
        int q = c-'A';
        
        return q+1;
    }
    
    int titleToNumber(string s) {
        
        int number = 0;
        for(auto it = s.begin();it!=s.end();it++){
            number *= 26;
            
            char itt = *it;
            int digit = translate(itt);
            number += digit;
        }
        
        return number;
    }
};