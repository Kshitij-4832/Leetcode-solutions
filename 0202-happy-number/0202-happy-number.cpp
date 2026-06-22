class Solution {
public:
    int sq_sum(int n){
        int ans = 0;
        while(n!=0){
            ans = ans+((n%10)*(n%10));
            n = n/10;
        }
        return ans;
    }
    bool isHappy(int n) {
        while(true){
            if(sq_sum(n)>=2&&sq_sum(n)<=6){
                return false;
            }
            n = sq_sum(n);
            if(n==1){
                return true;
            }
        }
        return true;
    }
};