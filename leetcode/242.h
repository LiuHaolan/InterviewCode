class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        
        map<char,int> sset;
        for(auto it = s.begin();it!= s.end();it++){
            if(!sset.count(*it))
                sset[*it] = 1;
            else
                sset[*it]++;
        }
        
        for(auto it = t.begin();it!= t.end();it++){
            if(!sset.count(*it))
                return false;
            else
                sset[*it] --;
        }
        
        for(auto itt = sset.begin();itt!= sset.end();itt++){
            if(itt->second != 0 )
                return false;
        }
        return true;
        
    }
};