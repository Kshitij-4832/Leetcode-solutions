class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int Max = INT_MIN, size = nums.size();
        for (int i = 0; i < size; i++) {
            Max = max(Max, nums[i]);
        }
        int left = 1, right = Max, ans = 0;
        while (left <= right) {
            int mid = (left + right) / 2,sum = 0;
            for(int i = 0;i<size;i++){
                if(nums[i]%mid==0&&nums[i]>=mid){
                    sum = sum+(nums[i]/mid);
                }
                else{
                    sum = sum+(nums[i]/mid)+1;
                }
            }
            if(sum<=threshold){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
};