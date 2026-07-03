class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size(),i = 0,j=1;
        int count =0;
        while(j<size){
            if(nums[i]!=nums[j]){
                nums[++i] = nums[j];
                count++;
            }
            j++;
        }
        return count+1;
    }
};