class Solution {
public:
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
                    sort(nums.begin() + i, nums.end());
                    break;
                }
            } else {
                int start = 0, end = size - 1;
                while (start < end) {
                    swap(nums[start], nums[end]);
                    start++;
                    end--;
                }
            }
        }
    }
};