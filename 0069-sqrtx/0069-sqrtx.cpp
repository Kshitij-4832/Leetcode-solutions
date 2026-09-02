class Solution {
public:
    int mySqrt(int x) {
        int left = 1,right = x;
        int ans = 0;
        while(left<=right){
            long long int mid = left+(right-left)/2;
            if(mid*mid==x){
                return mid;
            }
            if(mid*mid>x){
                right = mid-1;
            }
            else{
                left = mid+1;
                ans = mid;
            }
        }
        return ans;
    }
};