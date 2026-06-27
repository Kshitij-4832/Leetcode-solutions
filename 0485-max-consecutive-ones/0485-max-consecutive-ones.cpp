class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start = 0,end=0,maxlen = 0;
        while(end<nums.size()){
            if(nums[end]==0){
                start = end+1;
            }
            maxlen = max(maxlen,end-start+1);
            end++;
        }
        return maxlen;
    }
};