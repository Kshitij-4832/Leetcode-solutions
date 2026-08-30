class Solution {
public:
    bool search(vector<int>& nums, int target) {
        //Avg case time complexity ->O(log n)
        //Worst case time complexity ->O(n/2)
        
        int left = 0,right = nums.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[mid]==nums[left]&&nums[mid]==nums[right]){
                left++;
                right--;
                continue;
            }
            //Left sorted
            if(nums[left]<=nums[mid]){
                if(nums[left]<=target&&target<=nums[mid]){
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }
            //Right sorted
            else{
                if(nums[mid]<=target&&target<=nums[right]){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
            }
        }
        return false;
    }
};