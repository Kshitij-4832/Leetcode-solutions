class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0,digitsum = 0,size=nums.size();
        for(int i=0;i<size;i++){
            int element = nums[i];
            sum =sum+element;
            while(element!=0){
                digitsum =digitsum+(element%10);
                element = element/10;
            }
        }
        return abs(sum-digitsum);
    }
};