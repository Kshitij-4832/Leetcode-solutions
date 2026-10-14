class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int size = nums.size();
        for(int i =0;i<size;i++){
            if(nums[i]<0){
                nums[i] = nums[i]*(-1);
            }
        }
        sort(nums.begin(),nums.end());
        int left =0,right = size-1;
        long long int ans = 0;
        while(left<right){
            ans  =  ans+((nums[right]*nums[right])-(nums[left]*nums[left]));
            left++;
            right--;
        }
        if(left==right){
            ans = ans +nums[left]*nums[left];
        }
        return ans;
    }
};