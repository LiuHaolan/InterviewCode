class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        
        int i,j;
        for(j=0,i=numbers.size()-1;j<numbers.size(),i>=j;i--,j++){
            if(numbers[i]+numbers[j]==target)
                break;
            if(numbers[i]+numbers[j]<target){
                i++;
                continue;            
            }
            if(numbers[i]+numbers[j]>target){
                j--;
                continue;
            }
        }
        
        res.push_back(i+1);
        res.push_back(j+1);
        sort(res.begin(),res.end());
        return res;
    }
};