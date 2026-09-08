class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        for(long long p =1000;p<=n;p = p*1000){
            ans = ans+(n-p)+1;
        }
        return ans;
    }
};