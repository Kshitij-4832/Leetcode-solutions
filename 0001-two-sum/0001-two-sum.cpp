class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int, int> mpp;
        vector<int> ans = {0, 0};
        for (int i = 0; i < size; i++) {
            int sum = target - nums[i];
            if(mpp.find(nums[i])==mpp.end()){
                mpp[sum] = i;
            }
            else{
                ans[0] = i;
                ans[1] =mpp[nums[i]];
            }
        }
        return ans;
    }
};