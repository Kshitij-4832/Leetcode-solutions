class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int vertical = 0,size = nums.size();
        if(size==1){
            return (nums[0])%10;
        }
        if(size==2){
            return (nums[0]+nums[1])%10;
        }
        while(vertical<size-1){
            for(int i = 0;i<size-vertical-1;i++){
                nums[i] = (nums[i]+nums[i+1])%10;
            }
            vertical++;
        }
        return nums[0];
    }
};