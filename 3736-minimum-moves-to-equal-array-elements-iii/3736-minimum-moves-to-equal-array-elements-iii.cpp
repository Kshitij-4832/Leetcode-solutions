class Solution {
public:
    int minMoves(vector<int>& nums) {
        int Max = INT_MIN;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            Max = max(Max,nums[i]);
        }
        int cost = 0;
        for(int i = 0;i<n;i++){
            cost = cost+(Max-nums[i]);
        }
        return cost;
    }
};