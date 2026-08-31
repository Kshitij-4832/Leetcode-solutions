class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0,right = nums.size()-1;
        int Min = INT_MAX;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[left]<=nums[right]){
                Min = min(Min,nums[left]);
            }
            if(nums[mid]>=nums[left]){//Left sorted
                Min = min(Min,nums[left]);
                left = mid+1;
            }   
            else{
                Min = min(Min,nums[mid]);
                right = mid-1;
            }
        }
        return Min;
    }
};