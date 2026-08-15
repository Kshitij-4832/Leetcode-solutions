class Solution {
public:
    void F(vector<int>& nums, int index, vector<int>& arr,
           vector<vector<int>>& res) {
        if (index >= nums.size()) {
            res.push_back(arr);
            return;
        }
        arr.push_back(nums[index]);
        F(nums, index + 1, arr, res);
        arr.pop_back();
        F(nums, index + 1, arr, res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> arr;
        int index = 0;
        F(nums, 0, arr, res);
        return res;
    }
};