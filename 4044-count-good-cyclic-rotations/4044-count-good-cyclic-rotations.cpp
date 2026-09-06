class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int size = nums.size();
        long long int left = 0,right = 0;
        for(int i = 0;i<size;i++){
            if(i<size/2){
                left = left+nums[i];
            }
            else{
                right = right+nums[i];
            }
        }
        for(int i = 0;i<size;i++){
            nums.push_back(nums[i]);
        }
        int count = 0,j = size/2,k = 0;
        for(int i = 0;i<size;i++){
            if(left>right){
                count++;
            }
            left = left-nums[k]+nums[j];
            right = right-nums[j]+nums[k];
            k++;
            j++;
        }
        return count;
    }
};