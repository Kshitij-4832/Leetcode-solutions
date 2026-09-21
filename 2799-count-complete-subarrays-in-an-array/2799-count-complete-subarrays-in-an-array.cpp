class Solution {
public:
    int SubarraysLessThanK(vector<int>& nums,int k){
        unordered_map<int,int>mpp;
        int size = nums.size();
        int left = 0,right = 0,count = 0;
        while(right<size){
            mpp[nums[right]]++;
            while(mpp.size()>k){
                mpp[nums[left]]--;
                if(mpp[nums[left]]==0){
                    mpp.erase(nums[left]);
                }
                left++;
            }
            count = count+(right-left+1);
            right++;
        }
        return count;
    }
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int k = mpp.size();
        int c1 = SubarraysLessThanK(nums,k);
        k--;
        int c2 = SubarraysLessThanK(nums,k);
        return c1-c2;
    }
};