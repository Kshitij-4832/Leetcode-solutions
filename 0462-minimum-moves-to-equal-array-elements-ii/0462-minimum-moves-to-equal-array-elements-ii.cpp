class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size(),Median = nums[size/2];
        int steps = 0;
        for(int i = 0;i<size;i++){
            steps = steps+abs(nums[i]-Median);
        }
        return steps;
    }
};