class Solution {
public:
    int count_subarray_less_than_k(vector<int>&nums,int k){
        int left = 0,right = 0,size = nums.size(),count = 0;
        unordered_map<int,int>mpp;
        while(right<size){
            mpp[nums[right]]++;
            while(mpp.size()>k){
                mpp[nums[left]]--;
                if(mpp[nums[left]]==0){
                    mpp.erase(nums[left]);
                }
                left++;
            }
            if(mpp.size()<=k){
                count = count+(right-left+1);
            }
            right++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int c1 = count_subarray_less_than_k(nums,k);
        k--;
        int c2 = count_subarray_less_than_k(nums,k);
        return c1-c2;
    }
};