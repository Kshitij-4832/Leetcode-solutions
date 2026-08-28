class Solution {
public:
    int Lower_Bound(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1,ans = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid]==target){
                ans = mid;
            }
            if(nums[mid]>=target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
    int Upper_Bound(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1,ans = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid]==target){
                ans = mid;
            }
            if(nums[mid]>target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = Lower_Bound(nums,target);
        int ub = Upper_Bound(nums,target);
        vector<int> ans = {lb,ub};
        return ans;
    }
};