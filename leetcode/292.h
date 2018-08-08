class Solution {
public:

    bool canWinNim(int n) {
        vector<bool> answer(4);
        
        if(n<4)
            return true;
        if(n==4)
            return false;

        
        if(n%4==0)
            return false;
        return true;
    }
};