class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size =  nums.size(),max=INT_MIN,curr=0;
        for(int i=0;i<size;i++){
            curr = curr+nums[i];
            if(max<curr){
                max = curr;
            }
            if(curr<0){
                curr = 0;
            }
        }
        return max;
    }
};