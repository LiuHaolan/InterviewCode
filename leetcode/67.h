class Solution {
public:
    string addBinary(string a, string b) {
        
        int flag = 0;
        int i = a.size()-1;
        int j= b.size() - 1;
        stack<char> c;
        string res = "";
        for(;i>=0||j>=0;i--,j--){
            
            int ai,bj;
            if(i<0)
                ai = 0;
            else
                ai = a[i]-'0';
            if(j<0)
                bj = 0;
            else
                bj = b[j]-'0';
            
            int sum = ai + bj + flag;
            if(sum >= 2){
                flag = 1;
                sum = sum-2;
            }
            else{
                flag = 0;
            }
            
            if(sum == 1)
                c.push('1');
            else
                c.push('0');
            
        }
        if(flag == 1)
            c.push('1');
        
        while(!c.empty()){
            res += c.top();
            c.pop();
        }
        
        return res;
    }
};