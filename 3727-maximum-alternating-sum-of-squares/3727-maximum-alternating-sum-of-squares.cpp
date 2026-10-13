class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int size =nums.size(),pos=(size+1)/2;
        for(int i=0;i<size;i++){
            nums[i] =nums[i]*nums[i];
        }
        sort(nums.rbegin(),nums.rend());
        long long int sum =0;
        for(int i=0;i<size;i++){
            if(i<pos){
            sum =sum+nums[i];
            }
            else{
                sum =sum-nums[i];
            }
        }
        return sum;
    }
};