class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,mid=0;
        int size = nums.size();
        while(start<=end){
            mid = (end+start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                start =mid+1;
            }
            else if(target<nums[mid]){
                end = mid-1;
            }
            
        }
        if(target<nums[0])
        return 0;

        if(target>nums[size-1])
        return size;


        if(target>nums[mid]){
            return ++mid;
        }
        return mid;
    }
};