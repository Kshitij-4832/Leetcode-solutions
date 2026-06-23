class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sum = 0,max=INT_MIN,index=0;
        for(int i=0;i<size;i++){
            sum =  sum+nums[i];
            if(max<nums[i]){
                max = nums[i];
                index = i;
            }
        }
        int maxsum = ((size)*(size+1))/2;
        return maxsum - sum;
    }
};