class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int c1 = 0, c2 = 0;
        int left = 0, right = 0, size = nums.size(), sum = 0;
        while(right<size){
            sum = sum+nums[right]%2;
            while(sum>k){
                sum = sum-nums[left]%2;
                left++;
            }
            c1 = c1+(right-left+1);
            right++;
        }
        left = 0,right = 0,sum = 0;
        while(right<size){
            sum = sum+nums[right]%2;
            while(sum>=k){
                sum = sum-nums[left]%2;
                left++;
            }
            c2 = c2+(right-left+1);
            right++;
        }
        return abs(c2-c1);
    }
};