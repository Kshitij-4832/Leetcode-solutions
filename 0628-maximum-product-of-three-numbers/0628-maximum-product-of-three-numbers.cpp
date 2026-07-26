class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // The main idea is to obtain top 3 maximum values and bottom 2 minimum
        // values
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;
        int size = nums.size();
        for(int i = 0;i<size;i++){
            if(nums[i]>max1){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i]>max2){
                max3 = max2;
                max2 = nums[i];
            }
            else if(nums[i]>max3){
                max3 = nums[i];
            }
            
            if(min1>nums[i]){
                min2 = min1;
                min1 = nums[i];
            }
            else if(min2>nums[i]){
                min2 = nums[i];
            }
        }
        return max(max1*max2*max3,min1*min2*max({max1,max2,max3}));
    }
};