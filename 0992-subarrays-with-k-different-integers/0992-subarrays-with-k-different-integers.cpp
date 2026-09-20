class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int left = 0, right = 0, size = nums.size();
        int c1 = 0, c2 = 0;
        unordered_map<int, int> mpp;
        while (right < size) {
            mpp[nums[right]]++;
            while (mpp.size() > k) {
                mpp[nums[left]]--;
                if(mpp[nums[left]]==0){
                    mpp.erase(nums[left]);
                }
                left++;
            }
            if (mpp.size() <= k) {
                c1 = c1 + (right - left + 1);
            }
            right++;
        }
        left = 0,right = 0;
        mpp.clear();
        while (right < size) {
            mpp[nums[right]]++;
            while (mpp.size() > k-1) {
                mpp[nums[left]]--;
                if(mpp[nums[left]]==0){
                    mpp.erase(nums[left]);
                }
                left++;
            }
            if (mpp.size() <= k-1) {
                c2 = c2 + (right - left + 1);
            }
            right++;
        }
        return abs(c2 - c1);
    }
};