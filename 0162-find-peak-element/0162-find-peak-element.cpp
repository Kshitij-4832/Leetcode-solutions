class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size = nums.size(), ans = 0;
        if (size == 1) {
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[size-1]>nums[size-2]){
            return size-1;
        }
        int start = 1, end = size - 2;
        while (start <= end) {
            int mid = (end + start) / 2;
            if (mid >= 0 && mid <= size - 1) {
                if (nums[mid] >= nums[mid + 1] && nums[mid] >= nums[mid - 1]) {
                    ans = mid;
                    break;
                } else if (nums[mid] >= nums[mid - 1]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
            else{
                ans = mid;
                break;
            }
        }
        return ans;
    }
};