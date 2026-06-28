class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int size = nums.size(),start = 0,end=0;
        int sum = 0,minlen=INT_MAX;
        while(end<size){
            sum =  sum+nums[end];
            while(sum>=target){
                minlen = min(minlen,end-start+1);
                sum = sum-nums[start];
                start++;
            }
            end++;
        }
        if(minlen==INT_MAX){
            return 0;
        }
        return minlen;
    }
};