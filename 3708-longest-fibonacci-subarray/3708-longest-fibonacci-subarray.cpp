class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int size = nums.size(),Max = 0;
        if(size==3){
            if(nums[0]+nums[1]==nums[2]){
                return 3;
            }
            else{
                return 2;
            }
        }
        int left = 0,mid = 1,right = 2,count = 0;
        while(right<size){
            if(nums[left]+nums[mid]==nums[right]){
                count++;
                Max = max(Max,count);
            }
            else{
                count = 0;
            }
            right++;
            left++;
            mid++;
        }
        return Max+2;
    }
};