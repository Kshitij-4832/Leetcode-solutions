class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        while(k > size) {
            k = k - size;
        }
        if (size >= k) {
            int start = 0, end = size - 1;
            while (start < end) {
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
            start = 0, end = k - 1;
            while (start <= end) {
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
            start = k, end = size - 1;
            while (start <= end) {
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
        }
    }
}
;