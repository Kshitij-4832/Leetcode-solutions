class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> vec = {0,0};
    int size = nums.size();
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == target)
        {   
            while(start<=end){
                if(nums[start]==nums[end]){
                    vec[0] = start;
                    vec[1] = end;
                    return vec;
                }
                else if(nums[start]<target){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        if (target >= nums[mid])
        {
            start = mid + 1;
        }
        if(target<=nums[mid])
        {
            end = mid - 1;
        }
    }
    vec[0] = -1,vec[1] = -1;
    return vec;
    }
};