class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int size = nums.size();
        vector<int> ans;
        for (int i = 0; i < size; i++) {

            mpp[nums[i]]++;
        }
        for (int i = 0; i < size; i++) {
            if (mpp.find(nums[i] + 1) == mpp.end() &&
                mpp.find(nums[i] - 1) == mpp.end() && mpp[nums[i]] == 1) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};