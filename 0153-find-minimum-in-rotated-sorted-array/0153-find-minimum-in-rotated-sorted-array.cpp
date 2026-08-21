class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0,right = nums.size()-1;
        int res = 0;
        while(left<right){
            int mid = left+(right-left)/2;
            if(nums[left]<nums[right]){
                return nums[left];
            }
            if(nums[mid]>=nums[left]){
                //Search in right portion
                left = mid+1;
            }
            else{
                //Search in left portion
                right = mid;
            }
        }
        return nums[left];
    }
};