class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int size = nums.size();
        int result = INT_MAX,diff=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<size-2;i++){
            int start = i+1,end=size-1;
            int sum = 0;
            while(start<end){
                sum = nums[i]+nums[start]+nums[end];
                if(sum<target){
                    start++;
                }
                if(sum>target){
                    end--;
                }
                int prevdiff =diff;
                diff = abs(sum-target);
                if(prevdiff>diff){
                    result = sum;
                }
                else{
                    diff =  prevdiff;
                }
                if(diff==0){
                    return result;
                }
            }          
        }
        return result;

    }
};