class Solution {
public:
    int trailingZeroes(int n) {
        //Use Exponent of prime where prime number must be 5 and it's higher powers.
        int ans = 0,p = 5;
        while(p<=n){
            ans = ans + (n/p);
            p = p*5;
        }   
        return ans;
    }
};