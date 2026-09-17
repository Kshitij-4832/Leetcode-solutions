class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0]++;
        int size = nums.size(), presum = 0, count = 0;
        for (int i = 0; i < size; i++) {
            presum += nums[i];
            int rem = presum-k;
            count =count+mpp[rem];
            mpp[presum]++;
        }
        return count;
    }
};