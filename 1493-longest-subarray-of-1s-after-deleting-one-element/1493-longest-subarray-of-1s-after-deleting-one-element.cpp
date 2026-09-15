class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int size = nums.size();
        int left = 0, right = 0, zeros = 0, maxlen = 0;
        while (right < size) {
            if (nums[right] == 0) {
                zeros++;
            }
            if(zeros>1){
                if(nums[left]==1){
                    left++;
                }
                else{
                    left++;
                    zeros--;
                }
            }
            if (zeros <= 1) {
                maxlen = max(maxlen, right - left);
            }
            right++;
        }
        return maxlen;
    }
};