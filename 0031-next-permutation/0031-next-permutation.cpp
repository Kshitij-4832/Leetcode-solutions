class Solution {
public:
    vector<int> reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
        return nums;
    }
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        for (int i = size - 1; i >= 0; i--) {
            if (i != 0) {
                if (nums[i] > nums[i - 1]) {
                    int breakpoint = nums[i - 1];
                    int index = 0;
                    for (int j = i; j < size; j++) {
                        if (nums[j] > breakpoint) {
                            index = j;
                        }
                    }
                    swap(nums[i - 1], nums[index]);
                    reverse(nums,i,size-1);
                    break;
                }
            } else {
                reverse(nums,0,size-1);
            }
        }
    }
};