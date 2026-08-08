class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0, sign = 1, size = 0, copy = n;
        while(copy!=0){
            copy /=10;
            size++;
        }
        if(size%2==0){
            sign = sign*(-1);
        }
        while (n != 0) {
            ans = ans + ((n % 10) *sign);
            n /= 10;
            sign *= (-1);
        }
        return ans;
    }
};