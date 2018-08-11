class Solution {
public:
    int romanToInt(string s) {
        
        map<char, int> idx;
        idx['I'] = 1;
        idx['V'] = 5;
        idx['X'] = 10;
        idx['L'] = 50;
        idx['C'] = 100;
        idx['D'] = 500;
        idx['M'] = 1000;
        
        int sum = 0;
        for(auto itt = s.begin();itt!=s.end();itt++){
            
            auto it = itt+1;
            if(*itt == 'I'){
                if(*it == 'V' || *it == 'X'){
                    sum += idx[*it] - idx[*itt];
                    itt++;
                    continue;
                }
                
               
            }
            if(*itt == 'X'){
                if(*it == 'L' || *it == 'C'){
                    sum += idx[*it] - idx[*itt];
                    itt++;
                      continue;
                }
            
              
            }
             if(*itt == 'C'){
                if(*it == 'D' || *it == 'M'){
                    sum += idx[*it] - idx[*itt];
                    itt++;
                     continue;
                }
                
              
            }
            
            sum+=idx[*itt];
        }
        
        
        return sum;
    }
};