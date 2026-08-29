class Solution {
public:
    int rightsearch(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int ans = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                ans = mid;
                left = mid + 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }
    int leftsearch(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, ans = -1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                ans = mid;
                right = mid-1;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right  = mid-1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        // Solved using Binary Search in a more complicated way
        int left = leftsearch(nums,target);
        int right =  rightsearch(nums,target);
        vector<int> ans ={left,right};
        return ans;
    }
};