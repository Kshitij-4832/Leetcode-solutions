class Solution {
public:
    int addDigits(int num) {
        if(num>=0&&num<=9){
            return num;
        }
        int ans  = 0;
        while(true){
            int b = num%10;
            ans  =ans+b;
            num  = num/10;
            if(num<=0){
                num = ans;
                if(ans<10){
                    break;
                }
                ans  = 0;
            }
        }
        return ans;
    }
};