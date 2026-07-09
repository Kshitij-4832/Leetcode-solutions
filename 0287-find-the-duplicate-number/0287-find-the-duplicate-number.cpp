class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        int slow = nums[0], fast = nums[0];
        while (true) // detecting the cycle
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast) {
                break;
            }
        }
        int ptr = nums[0];
        while (ptr != slow) {
            ptr = nums[ptr];
            slow = nums[slow];
        }
        return slow;
    }
};