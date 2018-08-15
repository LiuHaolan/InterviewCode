class Solution {
public:
    
    string intToRoman(int num) {
       
        // data
        string array_5[3] = {"D","L","V"};
        string array_10[3] = {"M", "C", "X"};
        string array_1[3] = {"C", "X" ,"I"};
        
        string res = "";
        int digit_th = num/1000;
        while(digit_th-->0){
            res += "M";
        }
        
        for(int i=0;i<3;i++){
            
            int divisor = pow(10,2-i);
            int digit_hu = (num/divisor)%10;
            switch(digit_hu){
                case 9:
                    res+= array_1[i]+array_10[i];
                    break;
                case 4:
                    res+= array_1[i]+array_5[i];
                    break;
                default:
                    if(digit_hu < 5){
                        int tmp = digit_hu;
                        while(tmp-->0)
                            res += array_1[i];
                    }
                    else{
                        int tmp = digit_hu-5;
                        res+=array_5[i];
                        while(tmp-->0)
                            res += array_1[i];
                    
                    }
            }
        }
        
        return res;
    }
};