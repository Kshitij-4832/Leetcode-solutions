class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> mpp;
        int presum = 0, count = 0, size = nums.size();
        mpp[0]++;
        for (int i = 0; i < size; i++) {
            presum += nums[i];
            int rem = presum - goal;
            count = count + mpp[rem];
            mpp[presum]++;
        }
        return count;
    }
};