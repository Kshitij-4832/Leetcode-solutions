class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> leftproduct(size, 1);
        vector<int> rightproduct(size, 1);
        int lp = 1,rp = 1;
        for (int i = 1; i < size; i++) {
            lp *= nums[i-1];
            leftproduct[i] = lp;
        }
        for (int i = size - 2; i >= 0; i--) {
            rp = rp*nums[i+1];
            rightproduct[i] = rp;
        }
        vector<int> ans(size, 0);
        for (int i = 0; i < size; i++) {
            ans[i] = leftproduct[i] * rightproduct[i];
        }
        return ans;
    }
};