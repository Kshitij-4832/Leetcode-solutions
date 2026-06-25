class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int size = nums.size(),count = 0,freq=0;

        for(int i=0;i<size;i++){
            //int maj = 0;
            for(int j = i;j<size;j++){
                if(nums[j]==target){
                    count++;
                }
                if(2*count>(j-i+1)){
                    freq++;
                }
            }
            count = 0;
        }
        return freq;
    }
};