class Solution {
public:
    bool isPerfectSquare(int num) {
        long ans  = 0;
        for(int i =1;i<=INT_MAX;i=i+2){
            ans = ans+i;
            if(ans==num){
                return true;
            }
            if(ans>num){
                return false;
            }
        }
        return false;
    }
};