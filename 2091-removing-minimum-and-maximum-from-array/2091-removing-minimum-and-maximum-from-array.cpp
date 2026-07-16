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

        int a = max(min_index, max_index) + 1;//Delete both from front
        int b = min_index + (size - max_index) + 1;//delete min from front and max from back
        int c = max_index + (size - min_index) + 1;//delete max from front and min from back
        int d = size - min(min_index, max_index);//delete both from back
        return min({a,b,c,d});
    }
};