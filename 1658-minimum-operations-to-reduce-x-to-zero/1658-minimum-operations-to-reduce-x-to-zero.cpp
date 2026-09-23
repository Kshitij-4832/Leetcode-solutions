class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int size = nums.size(), total_sum = 0;
        for (int i : nums) {
            total_sum += i;
        }
        int left = 0, right = 0, target = total_sum - x, sum = 0, maxlen = 0;
        if(target==0){
            return size;
        }
        while (right < size) {
            sum = sum + nums[right];
            while (left <= right && sum > target) {
                sum = sum - nums[left];
                left++;
            }
            if (sum == target) {
                maxlen = max(maxlen, right - left + 1);
            }
            right++;
        }
        if (maxlen == 0) {
            return -1;
        }
        return size - maxlen;
    }
};