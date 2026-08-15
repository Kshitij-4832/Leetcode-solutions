class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int size = nums.size(),zerocount = 0;
        int x = 0;
        for(int i = 0;i<size;i++){
            x = x^nums[i];
            if(nums[i]==0){
                zerocount++;
            }
        }
        if(zerocount==nums.size()){
            return 0;
        }
        if(x==0){
            return nums.size()-1;
        }
        return nums.size();

    }
};