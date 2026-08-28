class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, lb = right;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if(target==nums[mid]){
                return mid;
            }
            if(nums[mid]>target){
                right = mid-1;
                lb = mid;
            }
            else{
                left= mid+1;
            }
        }
        if(lb==nums.size()-1&&target>=nums[lb]){
            return lb+1;
        }
        return lb;
    }
};