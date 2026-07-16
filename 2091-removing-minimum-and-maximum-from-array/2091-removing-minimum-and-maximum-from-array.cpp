class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int size = nums.size();
        if (size == 1) {
            return 1;
        }
        if (size == 2) {
            return 2;
        }
        int min_index = -1, max_index = -1;
        int MIN = INT_MAX, MAX = INT_MIN;
        for (int i = 0; i < size; i++) {
            if (MIN > nums[i]) {
                MIN = nums[i];
                min_index = i;
            }
            if (MAX < nums[i]) {
                MAX = nums[i];
                max_index = i;
            }
        }

        int a = max(min_index, max_index) + 1;
        int b = min_index + (size - max_index) + 1;
        int c = max_index + (size - min_index) + 1;
        int d = size - min(min_index, max_index);
        return min({a,b,c,d});
    }
};