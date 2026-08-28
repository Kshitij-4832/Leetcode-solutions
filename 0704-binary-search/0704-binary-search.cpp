class Solution {
public:
    int Func(vector<int>& nums,int left,int right,int target){
        //Recursive Binary Search
        if(left>right){
            return -1;
        }
        int mid = left+(right-left)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target){
            return Func(nums,left,mid-1,target);
        }
        else{
            return Func(nums,mid+1,right,target);
        }
    }
    int search(vector<int>& nums, int target) {
        int res = Func(nums,0,nums.size()-1,target);
        return res;
    }
};