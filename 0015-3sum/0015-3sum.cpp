class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int size = nums.size();
        sort(nums.begin(),nums.end());
        for (int i = 0; i < size; i++) {
            if (i > 0) {
                if (nums[i] == nums[i - 1]) {
                    continue;
                }
            }
            int start = i + 1, end = size - 1;
            while (start < end) {
                if (nums[i] + nums[start] + nums[end] == 0) {
                    ans.push_back({nums[i], nums[start], nums[end]});
                    start++;
                    while (start < end && nums[start] == nums[start - 1]) {
                        start++;
                    }
                } else if (nums[i] + nums[start] + nums[end] > 0) {
                    end--;
                } else {
                    start++;
                }
            }
        }
        return ans;
    }
};