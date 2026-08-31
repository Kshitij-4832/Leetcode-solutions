class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0,right = nums.size()-1;
        if(nums.size()==1){
            return nums[0];
        }
        int Min = INT_MAX;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[left]==nums[mid]&&nums[mid]==nums[right]){
                right--;
                left++;
                Min = min(Min,nums[mid]);
                continue;
            }
            if(nums[mid]>=nums[left]&&nums[mid]>=nums[right]){//Left sorted
                Min = min(Min,nums[left]);
                left = mid+1;
            }   
            else{//Right Sorted
                Min = min(Min,nums[mid]);
                right = mid-1;
            }
        }
        return Min;
    }
};