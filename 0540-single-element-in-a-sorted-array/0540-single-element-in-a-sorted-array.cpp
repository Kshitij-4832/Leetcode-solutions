class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int size = nums.size();
        if (size == 1) {
            return nums[0];
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[size-1]!=nums[size-2]){
            return nums[size-1];
        }

        int start = 1, end = size - 2;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            } else if (mid % 2 != 0 && nums[mid] == nums[mid - 1] ||
                       mid % 2 == 0 && nums[mid] == nums[mid + 1]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};