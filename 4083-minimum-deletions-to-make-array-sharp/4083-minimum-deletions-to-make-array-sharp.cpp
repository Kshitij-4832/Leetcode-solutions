class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int adjacent_count = 0,size = nums.size();
        for(int i = 0;i<size-1;i++){
            if(nums[i]==nums[i+1]){
                adjacent_count++;
            }
        }
        return adjacent_count;
    }
};