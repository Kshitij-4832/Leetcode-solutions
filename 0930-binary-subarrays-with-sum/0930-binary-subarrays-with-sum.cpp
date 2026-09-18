class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int c1 = 0,c2 = 0,size = nums.size();
        int left = 0,right = 0,sum = 0;
        while(right<size){
            sum = sum+nums[right];
            while(sum>goal){
                sum = sum-nums[left];
                left++;
            }
            c1 = c1+(right-left+1);
            right++;
        }
        left = 0,right =0,sum = 0;
        while(right<size){
            sum = sum+nums[right];
            while(left<=right&&sum>=goal){
                sum = sum-nums[left];
                left++;
            }
            c2 = c2+(right-left+1);
            right++;
        }
        return abs(c2-c1);
    }
};