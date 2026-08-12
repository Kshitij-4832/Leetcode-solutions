class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int size = nums.size();
        int left = 0,right = 0,Max = 0;
        unordered_map<int,int> mpp;
        while(right<size){
            mpp[nums[right]]++;
            while(mpp[nums[right]]>k){
                mpp[nums[left]]--;
                left++;
            }
            Max = max(Max,right-left+1);
            right++;
        }
        return Max;

    }
};