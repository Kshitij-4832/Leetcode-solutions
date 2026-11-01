class Solution {
public:
    int minMoves(vector<int>& nums) {
        int Min = INT_MAX;
        int size = nums.size();
        for(int i = 0;i<size;i++){
            Min = min(Min,nums[i]);
        }
        int sum = 0;
        for(int i = 0;i<size;i++){
            sum = sum+(nums[i]-Min);
        }
        return sum;
    }
};