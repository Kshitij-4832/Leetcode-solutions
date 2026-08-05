class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size(), max = INT_MIN, min = INT_MAX;
        unordered_map<int, int> mpp;
        for (int i = 0; i < size; i++) {
            if (max < nums[i]) {
                max = nums[i];
            }
            if (min > nums[i]) {
                min = nums[i];
            }
            mpp[nums[i]]++;
        }
        for (int i = min + 1; i < max; i++) {
            if(mpp.find(i)==mpp.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};